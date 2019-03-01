/*-
 * Copyright (c) 2014, 2016 Robert N. M. Watson
 * All rights reserved.
 *
 * This software was developed by SRI International and the University of
 * Cambridge Computer Laboratory under DARPA/AFRL contract (FA8750-10-C-0237)
 * ("CTSRD"), as part of the DARPA CRASH research programme.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * A few non-faulting CHERI-related virtual-memory tests.
 */

#include <sys/cdefs.h>

#if !__has_feature(capabilities)
#error "This code requires a CHERI-aware compiler"
#endif

#include <sys/types.h>
#include <sys/mman.h>
#include <sys/mount.h>
#include <sys/socket.h>
#include <sys/sysctl.h>
#include <sys/time.h>
#include <sys/ucontext.h>
#include <sys/wait.h>

#include <sys/caprevoke.h>
#include <sys/event.h>

#include <machine/frame.h>
#include <machine/trap.h>

#include <cheri/cheri.h>
#include <cheri/cheric.h>

#include <err.h>
#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>
#include <unistd.h>

#include "cheritest.h"

/*
 * Tests to check that tags are ... or aren't ... preserved for various page
 * types.  'Anonymous' pages provided by the VM subsystem should always
 * preserve tags.  Pages from the filesystem should not -- unless they are
 * mapped MAP_PRIVATE, in which case they should, since they are effectively
 * anonymous pages.  Or so I claim.
 *
 * Most test cases only differ in the mmap flags and the file descriptor, this
 * function does all the shared checks
 */
static void
mmap_and_check_tag_stored(int fd, int protflags, int mapflags)
{
	void * __capability volatile *cp;
	void * __capability cp_value;
	int v;

	cp = CHERITEST_CHECK_SYSCALL(mmap(NULL, getpagesize(), protflags,
	     mapflags, fd, 0));
	cp_value = cheri_ptr(&v, sizeof(v));
	*cp = cp_value;
	cp_value = *cp;
	CHERITEST_VERIFY2(cheri_gettag(cp_value) != 0, "tag lost");
	CHERITEST_CHECK_SYSCALL(munmap(__DEVOLATILE(void *, cp), getpagesize()));
	if (fd != -1)
		CHERITEST_CHECK_SYSCALL(close(fd));
}

void
cheritest_vm_tag_mmap_anon(const struct cheri_test *ctp __unused)
{
	mmap_and_check_tag_stored(-1, PROT_READ | PROT_WRITE, MAP_ANON);
	cheritest_success();
}

void
cheritest_vm_tag_shm_open_anon_shared(const struct cheri_test *ctp __unused)
{
	int fd = CHERITEST_CHECK_SYSCALL(shm_open(SHM_ANON, O_RDWR, 0600));
	CHERITEST_CHECK_SYSCALL(ftruncate(fd, getpagesize()));
	mmap_and_check_tag_stored(fd, PROT_READ | PROT_WRITE, MAP_SHARED);
	cheritest_success();
}

void
cheritest_vm_tag_shm_open_anon_private(const struct cheri_test *ctp __unused)
{
	int fd = CHERITEST_CHECK_SYSCALL(shm_open(SHM_ANON, O_RDWR, 0600));
	CHERITEST_CHECK_SYSCALL(ftruncate(fd, getpagesize()));
	mmap_and_check_tag_stored(fd, PROT_READ | PROT_WRITE, MAP_PRIVATE);
	cheritest_success();
}

/*
 * Test aliasing of SHM_ANON objects
 */
void
cheritest_vm_tag_shm_open_anon_shared2x(const struct cheri_test *ctp __unused)
{
	void * __capability volatile * map2;
	void * __capability c2;
	int fd = CHERITEST_CHECK_SYSCALL(shm_open(SHM_ANON, O_RDWR, 0600));
	CHERITEST_CHECK_SYSCALL(ftruncate(fd, getpagesize()));

	map2 = CHERITEST_CHECK_SYSCALL(mmap(NULL, getpagesize(),
		PROT_READ, MAP_SHARED, fd, 0));

	/* Verify that no capability present */
	c2 = *map2;
	CHERITEST_VERIFY2(cheri_gettag(c2) == 0, "tag exists on first read");
	CHERITEST_VERIFY2(c2 == NULL, "Initial read NULL");

	mmap_and_check_tag_stored(fd, PROT_READ | PROT_WRITE, MAP_SHARED);

	/* And now verify that it is, thanks to the aliased maps */
	c2 = *map2;
	CHERITEST_VERIFY2(cheri_gettag(c2) != 0, "tag lost on second read");
	CHERITEST_VERIFY2(c2 != NULL, "Second read not NULL");

	cheritest_success();
}

void
cheritest_vm_shm_open_anon_unix_surprise(const struct cheri_test *ctp __unused)
{
	int sv[2];
	int pid;

	CHERITEST_CHECK_SYSCALL(socketpair(AF_UNIX, SOCK_DGRAM, 0, sv) != 0);

	pid = fork();
	if (pid == -1)
		cheritest_failure_errx("Fork failed; errno=%d", errno);

	if (pid == 0) {
		void * __capability * map;
		void * __capability c;
		int fd, tag;
		struct msghdr msg = { 0 };
		struct cmsghdr * cmsg;
		char cmsgbuf[CMSG_SPACE(sizeof(fd))] = { 0 } ;
		char iovbuf[16];
		struct iovec iov = { .iov_base = iovbuf, .iov_len = sizeof(iovbuf) };

		close(sv[1]);

		/* Read from socket */
		msg.msg_iov = &iov;
		msg.msg_iovlen = 1;
		msg.msg_control = cmsgbuf;
		msg.msg_controllen = sizeof(cmsgbuf);
		CHERITEST_CHECK_SYSCALL(recvmsg(sv[0], &msg, 0));

		/* Deconstruct cmsg */
		/* XXX Doesn't compile: cmsg = CMSG_FIRSTHDR(&msg); */
		cmsg = msg.msg_control;
		memmove(&fd, CMSG_DATA(cmsg), sizeof(fd));

		CHERITEST_VERIFY2(fd >= 0, "fd read OK");

		map = CHERITEST_CHECK_SYSCALL(mmap(NULL, getpagesize(),
						PROT_READ, MAP_SHARED, fd,
						0));
		c = *map;

		fprintf(stderr, "rx cap: v:%lu b:%016jx l:%016zx o:%jx\n",
			(unsigned long)cheri_gettag(c), cheri_getbase(c),
			cheri_getlen(c), cheri_getoffset(c));

		tag = cheri_gettag(c);
		CHERITEST_VERIFY2(tag == 0, "tag read");

		CHERITEST_CHECK_SYSCALL(munmap(map, getpagesize()));
		close(sv[0]);
		close(fd);

		exit(tag);
	} else {
		void * __capability * map;
		void * __capability c;
		int fd, res;
		struct msghdr msg = { 0 };
		struct cmsghdr * cmsg;
		char cmsgbuf[CMSG_SPACE(sizeof(fd))] = { 0 };
		char iovbuf[16] = { 0 };
		struct iovec iov = { .iov_base = iovbuf, .iov_len = sizeof(iovbuf) };

		close(sv[0]);

		fd = CHERITEST_CHECK_SYSCALL(shm_open(SHM_ANON, O_RDWR, 0600));
		CHERITEST_CHECK_SYSCALL(ftruncate(fd, getpagesize()));

		map = CHERITEST_CHECK_SYSCALL(mmap(NULL, getpagesize(),
						PROT_READ | PROT_WRITE,
						MAP_SHARED, fd, 0));

		/* Just some pointer */
		*map = &fd;
		c = *map;
		CHERITEST_VERIFY2(cheri_gettag(c) != 0, "tag written");

		fprintf(stderr, "tx cap: v:%lu b:%016jx l:%016zx o:%jx\n",
			(unsigned long)cheri_gettag(c), cheri_getbase(c),
			cheri_getlen(c), cheri_getoffset(c));

		CHERITEST_CHECK_SYSCALL(munmap(map, getpagesize()));

		/* Construct control message */
		msg.msg_iov = &iov;
		msg.msg_iovlen = 1;
		msg.msg_control = cmsgbuf;
		msg.msg_controllen = sizeof(cmsgbuf);
		/* XXX cmsg = CMSG_FIRSTHDR(&msg); */
		cmsg = msg.msg_control;
		cmsg->cmsg_level = SOL_SOCKET;
		cmsg->cmsg_type = SCM_RIGHTS;
		cmsg->cmsg_len = CMSG_LEN(sizeof fd);
		memmove(CMSG_DATA(cmsg), &fd, sizeof(fd));
		msg.msg_controllen = cmsg->cmsg_len;

		/* Send! */
		CHERITEST_CHECK_SYSCALL(sendmsg(sv[1], &msg, 0));

		close(sv[1]);
		close(fd);

		waitpid(pid, &res, 0);
		if (res == 0) {
			cheritest_success();
		} else {
			cheritest_failure_errx("tag transfer succeeded");
		}
	}
}

#ifdef __CHERI_PURE_CAPABILITY__

/*
 * We can fork processes with shared file descriptor tables, including
 * shared access to a kqueue, which can hoard capabilities for us, allowing
 * them to flow between address spaces.  It is difficult to know what to do
 * about this case, but it seems important to acknowledge.
 */
void
cheritest_vm_cap_share_fd_kqueue(const struct cheri_test *ctp __unused)
{
	int kq, pid;

	kq = CHERITEST_CHECK_SYSCALL(kqueue());
	pid = rfork(RFPROC);
	if (pid == -1)
		cheritest_failure_errx("Fork failed; errno=%d", errno);

	if (pid == 0) {
		struct kevent oke;
		/*
		 * Wait for receipt of the user event, and witness the
		 * capability received from the parent.
		 */
		oke.udata = NULL;
		CHERITEST_CHECK_SYSCALL(kevent(kq, NULL, 0, &oke, 1, NULL));
		CHERITEST_VERIFY2(oke.ident == 0x2BAD, "Bad identifier from kqueue");
		CHERITEST_VERIFY2(oke.filter == EVFILT_USER, "Bad filter from kqueue");

		CHERI_FPRINT_PTR(stderr, oke.udata);

		exit(cheri_gettag(oke.udata));
	} else {
		int res;
		struct kevent ike;
		void * __capability passme;

		/*
		 * Generate a capability to a new mapping to pass to the
		 * child, who will not have this region mapped.
		 */
		passme = CHERITEST_CHECK_SYSCALL(mmap(0, PAGE_SIZE,
				PROT_READ | PROT_WRITE, MAP_ANON, -1, 0));

		EV_SET(&ike, 0x2BAD, EVFILT_USER, EV_ADD|EV_ONESHOT,
			NOTE_FFNOP, 0, passme);
		CHERITEST_CHECK_SYSCALL(kevent(kq, &ike, 1, NULL, 0, NULL));

		EV_SET(&ike, 0x2BAD, EVFILT_USER, EV_KEEPUDATA,
			NOTE_FFNOP|NOTE_TRIGGER, 0, NULL);
		CHERITEST_CHECK_SYSCALL(kevent(kq, &ike, 1, NULL, 0, NULL));

		waitpid(pid, &res, 0);
		if (res == 0) {
			cheritest_success();
		} else {
			cheritest_failure_errx("tag transfer");
		}
	}
}

extern int __sys_sigaction(int, const struct sigaction *, struct sigaction *);

/*
 * We can rfork and share the sigaction table across parent and child, which
 * again allows for capability passing across address spaces.
 */
void
cheritest_vm_cap_share_sigaction(const struct cheri_test *ctp __unused)
{
	int pid;

	pid = rfork(RFPROC | RFSIGSHARE);
	if (pid == -1)
		cheritest_failure_errx("Fork failed; errno=%d", errno);

	/*
	 * Note: we call __sys_sigaction directly here, since the libthr
	 * _thr_sigaction has a shadow list for the sigaction values
	 * (per-process) and therefore does not read the new value installed by
	 * the child process forked with RFSIGSHARE.
	 */
	if (pid == 0) {
		void *__capability passme;
		struct sigaction sa;

		bzero(&sa, sizeof(sa));

		/* This is a little abusive, but shows the point, I think */

		passme = CHERITEST_CHECK_SYSCALL(mmap(0, PAGE_SIZE,
		    PROT_READ | PROT_WRITE | PROT_EXEC, MAP_ANON, -1, 0));
		sa.sa_handler = passme;

		CHERITEST_CHECK_SYSCALL(__sys_sigaction(SIGUSR1, &sa, NULL));

		/* Read it again and check that we get the same value back. */
		CHERITEST_CHECK_SYSCALL(__sys_sigaction(SIGUSR1, NULL, &sa));
		fprintf(stderr, "child value read from sigaction(): ");
		CHERI_FPRINT_PTR(stderr, sa.sa_handler);
		CHERITEST_CHECK_EQ_CAP(sa.sa_handler, passme);

		exit(0);
	} else {
		struct sigaction sa;

		waitpid(pid, NULL, 0);

		bzero(&sa, sizeof(sa));
		sa.sa_flags = 1;

		CHERITEST_CHECK_SYSCALL(__sys_sigaction(SIGUSR1, NULL, &sa));
		fprintf(stderr, "parent sa read from sigaction(): ");
		CHERI_FPRINT_PTR(stderr, sa.sa_handler);

		/* Flags should be zero on read */
		CHERITEST_CHECK_EQ_LONG(sa.sa_flags, 0);

		if (cheri_gettag(sa.sa_handler)) {
			cheritest_failure_errx("tag transfer");
		} else {
			cheritest_success();
		}
	}
}

#endif

void
cheritest_vm_tag_dev_zero_shared(const struct cheri_test *ctp __unused)
{
	int fd = CHERITEST_CHECK_SYSCALL(open("/dev/zero", O_RDWR));
	mmap_and_check_tag_stored(fd, PROT_READ | PROT_WRITE, MAP_SHARED);
	cheritest_success();
}

void
cheritest_vm_tag_dev_zero_private(const struct cheri_test *ctp __unused)
{
	int fd = CHERITEST_CHECK_SYSCALL(open("/dev/zero", O_RDWR));
	mmap_and_check_tag_stored(fd, PROT_READ | PROT_WRITE, MAP_PRIVATE);
	cheritest_success();
}

static int
create_tempfile()
{
	char template[] = "/tmp/cheritest.XXXXXXXX";
	int fd = CHERITEST_CHECK_SYSCALL2(mkstemp(template),
	    "mkstemp %s", template);
	CHERITEST_CHECK_SYSCALL(unlink(template));
	CHERITEST_CHECK_SYSCALL(ftruncate(fd, getpagesize()));
	return fd;
}

/*
 * This case should fault.
 */
void
cheritest_vm_notag_tmpfile_shared(const struct cheri_test *ctp __unused)
{
	void * __capability volatile *cp;
	void * __capability cp_value;
	int fd, v;

	fd = create_tempfile();
	cp = CHERITEST_CHECK_SYSCALL(mmap(NULL, getpagesize(),
	    PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0));
	cp_value = cheri_ptr(&v, sizeof(v));
	*cp = cp_value;
	cheritest_failure_errx("tagged store succeeded");
}

void
cheritest_vm_tag_tmpfile_private(const struct cheri_test *ctp __unused)
{
	int fd = create_tempfile();
	mmap_and_check_tag_stored(fd, PROT_READ | PROT_WRITE, MAP_PRIVATE);
	cheritest_success();
}

void
cheritest_vm_tag_tmpfile_private_prefault(const struct cheri_test *ctp __unused)
{
	int fd = create_tempfile();
	mmap_and_check_tag_stored(fd, PROT_READ | PROT_WRITE,
	    MAP_PRIVATE | MAP_PREFAULT_READ);
	cheritest_success();
}

const char *
xfail_need_writable_tmp(const char *name __unused)
{
	static const char *reason = NULL;
	static int checked = 0;
	char template[] = "/tmp/cheritest.XXXXXXXX";
	int fd;

	if (checked)
		return (reason);

	checked = 1;
	fd = mkstemp(template);
	if (fd >= 0) {
		close(fd);
		unlink(template);
		return (NULL);
	}
	reason = "/tmp is not writable";
	return (reason);
}

/*
 * Exercise copy-on-write:
 *
 * 1) Create a new anonymous shared memory object, extend to page size, map,
 * and write a tagged capability to it.
 *
 * 2) Create a second copy-on-write mapping; read back the tagged value via
 * the second mapping, and confirm that it still has a tag.
 * (cheritest_vm_cow_read)
 *
 * 3) Write an adjacent word in the second mapping, which should cause a
 * copy-on-write, then read back the capability and confirm that it still has
 * a tag.  (cheritest_vm_cow_write)
 */
void
cheritest_vm_cow_read(const struct cheri_test *ctp __unused)
{
	void * __capability volatile *cp_copy;
	void * __capability volatile *cp_real;
	void * __capability cp;
	int fd;

	/*
	 * Create anonymous shared memory object.
	 */
	fd = CHERITEST_CHECK_SYSCALL(shm_open(SHM_ANON, O_RDWR, 0600));
	CHERITEST_CHECK_SYSCALL(ftruncate(fd, getpagesize()));

	/*
	 * Create 'real' and copy-on-write mappings.
	 */
	cp_real = CHERITEST_CHECK_SYSCALL2(mmap(NULL, getpagesize(),
	    PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0), "mmap cp_real");
	cp_copy = CHERITEST_CHECK_SYSCALL2(mmap(NULL, getpagesize(),
	    PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0), "mmap cp_copy");

	/*
	 * Write out a tagged capability to 'real' mapping -- doesn't really
	 * matter what it points at.  Confirm it has a tag.
	 */
	cp = cheri_ptr(&fd, sizeof(fd));
	cp_real[0] = cp;
	cp = cp_real[0];
	CHERITEST_VERIFY2(cheri_gettag(cp) != 0, "pretest: tag missing");

	/*
	 * Read in tagged capability via copy-on-write mapping.  Confirm it
	 * has a tag.
	 */
	cp = cp_copy[0];
	CHERITEST_VERIFY2(cheri_gettag(cp) != 0, "tag missing, cp_real");

	/*
	 * Clean up.
	 */
	CHERITEST_CHECK_SYSCALL2(munmap(__DEVOLATILE(void *, cp_real),
	    getpagesize()), "munmap cp_real");
	CHERITEST_CHECK_SYSCALL2(munmap(__DEVOLATILE(void *, cp_copy),
	    getpagesize()), "munmap cp_copy");
	CHERITEST_CHECK_SYSCALL(close(fd));
	cheritest_success();
}

void
cheritest_vm_cow_write(const struct cheri_test *ctp __unused)
{
	void * __capability volatile *cp_copy;
	void * __capability volatile *cp_real;
	void * __capability cp;
	int fd;

	/*
	 * Create anonymous shared memory object.
	 */
	fd = CHERITEST_CHECK_SYSCALL(shm_open(SHM_ANON, O_RDWR, 0600));
	CHERITEST_CHECK_SYSCALL(ftruncate(fd, getpagesize()));

	/*
	 * Create 'real' and copy-on-write mappings.
	 */
	cp_real = CHERITEST_CHECK_SYSCALL2(mmap(NULL, getpagesize(),
	    PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0), "mmap cp_real");
	cp_copy = CHERITEST_CHECK_SYSCALL2(mmap(NULL, getpagesize(),
	    PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0), "mmap cp_copy");

	/*
	 * Write out a tagged capability to 'real' mapping -- doesn't really
	 * matter what it points at.  Confirm it has a tag.
	 */
	cp = cheri_ptr(&fd, sizeof(fd));
	cp_real[0] = cp;
	cp = cp_real[0];
	CHERITEST_VERIFY2(cheri_gettag(cp) != 0, "pretest: tag missing");

	/*
	 * Read in tagged capability via copy-on-write mapping.  Confirm it
	 * has a tag.
	 */
	cp = cp_copy[0];
	CHERITEST_VERIFY2(cheri_gettag(cp) != 0, "tag missing, cp_real");

	/*
	 * Diverge from cheritest_vm_cow_read(): write via the second mapping
	 * to force a copy-on-write rather than continued sharing of the page.
	 */
	cp = cheri_ptr(&fd, sizeof(fd));
	cp_copy[1] = cp;

	/*
	 * Confirm that the tag is still present on the 'real' page.
	 */
	cp = cp_real[0];
	CHERITEST_VERIFY2(cheri_gettag(cp) != 0, "tag missing after COW, cp_real");

	cp = cp_copy[0];
	CHERITEST_VERIFY2(cheri_gettag(cp) != 0, "tag missing after COW, cp_copy");

	/*
	 * Clean up.
	 */
	CHERITEST_CHECK_SYSCALL2(munmap(__DEVOLATILE(void *, cp_real),
	    getpagesize()), "munmap cp_real");
	CHERITEST_CHECK_SYSCALL2(munmap(__DEVOLATILE(void *, cp_copy),
	    getpagesize()), "munmap cp_copy");
	CHERITEST_CHECK_SYSCALL(close(fd));
	cheritest_success();
}

/* Store a cap to a page and check that mincore reports it dirty */
void
cheritest_vm_capdirty(const struct cheri_test *ctp __unused)
{
	static const size_t npg = 2;
	size_t sz = npg * getpagesize();

	void * __capability *pg0;
	unsigned char mcv[npg] = { 0 };

	pg0 = CHERITEST_CHECK_SYSCALL(
	    mmap(NULL, sz, PROT_READ | PROT_WRITE, MAP_ANON, -1, 0));

	void * __capability *pg1 = (void *)&((char *)pg0)[getpagesize()];

	CHERITEST_CHECK_SYSCALL(mincore(pg0, sz, &mcv[0]));
	CHERITEST_VERIFY2(mcv[0] == 0, "page 0 status 0");
	CHERITEST_VERIFY2(mcv[1] == 0, "page 1 status 0");

	*(char *)pg0 = 0x42;

	CHERITEST_CHECK_SYSCALL(mincore(pg0, sz, &mcv[0]));
	CHERITEST_VERIFY2(
	    (mcv[0] & MINCORE_MODIFIED) != 0, "page 0 modified 1");
	CHERITEST_VERIFY2(
	    (mcv[0] & MINCORE_CAPSTORE) != 0, "page 0 capstore 1");
	CHERITEST_VERIFY2(
	    (mcv[0] & MINCORE_CAPDIRTY) == 0, "page 0 !capdirty 1");
	CHERITEST_VERIFY2(mcv[1] == 0, "page 1 status 1");

	*pg1 = (void * __capability)pg0;

	CHERITEST_CHECK_SYSCALL(mincore(pg0, sz, &mcv[0]));
	CHERITEST_VERIFY2(
	    (mcv[0] & MINCORE_MODIFIED) != 0, "page 0 modified 2");
	CHERITEST_VERIFY2(
	    (mcv[0] & MINCORE_CAPSTORE) != 0, "page 0 capstore 2");
	CHERITEST_VERIFY2(
	    (mcv[0] & MINCORE_CAPDIRTY) == 0, "page 0 !capdirty 2");
	CHERITEST_VERIFY2(
	    (mcv[1] & MINCORE_MODIFIED) != 0, "page 1 modified 2");
	CHERITEST_VERIFY2(
	    (mcv[1] & MINCORE_CAPSTORE) != 0, "page 1 capstore 2");
	CHERITEST_VERIFY2(
	    (mcv[1] & MINCORE_CAPDIRTY) != 0, "page 1 capdirty 2");

	CHERITEST_CHECK_SYSCALL(munmap(pg0, sz));
	cheritest_success();
}

/*
 * Revocation tests
 */

#ifdef CAPREVOKE

/* Ick */
static inline uint64_t
get_cyclecount()
{
#if defined(__mips__)
	return cheri_get_cyclecount();
#else
	return 0;
#endif
}

static int
check_revoked(void * __capability r)
{
	return (cheri_gettag(r) == 0) ||
	    ((cheri_gettype(r) == -1L) && (cheri_getperm(r) == 0));
}

static void
install_kqueue_cap(int kq, void * __capability revme)
{
	struct kevent ike;

	EV_SET(&ike, 0x2BAD, EVFILT_USER, EV_ADD | EV_ONESHOT | EV_DISABLE,
	    NOTE_FFNOP, 0, revme);
	CHERITEST_CHECK_SYSCALL(kevent(kq, &ike, 1, NULL, 0, NULL));
	EV_SET(&ike, 0x2BAD, EVFILT_USER, EV_KEEPUDATA,
	    NOTE_FFNOP | NOTE_TRIGGER, 0, NULL);
	CHERITEST_CHECK_SYSCALL(kevent(kq, &ike, 1, NULL, 0, NULL));
}

static void
check_kqueue_cap(int kq, unsigned int valid)
{
	struct kevent ike, oke = { 0 };

	EV_SET(&ike, 0x2BAD, EVFILT_USER, EV_ENABLE|EV_KEEPUDATA,
		NOTE_FFNOP, 0, NULL);
	CHERITEST_CHECK_SYSCALL(kevent(kq, &ike, 1, NULL, 0, NULL));
	CHERITEST_CHECK_SYSCALL(kevent(kq, NULL, 0, &oke, 1, NULL));
	CHERITEST_VERIFY2(oke.ident == 0x2BAD, "Bad identifier from kqueue");
	CHERITEST_VERIFY2(oke.filter == EVFILT_USER, "Bad filter from kqueue");
	CHERITEST_VERIFY2(check_revoked(oke.udata) == !valid,
				"kqueue-held cap not as expected");
}

static void
fprintf_caprevoke_stats(FILE *f, struct caprevoke_stats crst, uint32_t cycsum)
{
	fprintf(f, "revoke:"
		" einit=%" PRIu64
		" efini=%" PRIu64
		" psro=%" PRIu32
		" psrw=%" PRIu32
		" scanc=%" PRIu64
		" psk=%" PRIu32
		" pskf=%" PRIu32
		" pfro=%" PRIu32
		" pfrw=%" PRIu32
		" prty=%" PRIu32
		" caps=%" PRIu32
		" crevd=%" PRIu32
		" cnuke=%" PRIu32
		" totc=%" PRIu32 "\n",
		crst.epoch_init,
		crst.epoch_fini,
		crst.pages_scan_ro,
		crst.pages_scan_rw,
		crst.page_scan_cycles,
		crst.pages_skip,
		crst.pages_skip_fast,
		crst.pages_faulted_ro,
		crst.pages_faulted_rw,
		crst.pages_retried,
		crst.caps_found,
		crst.caps_found_revoked,
		crst.caps_cleared,
		cycsum);
}

void
test_caprevoke_lightly(const struct cheri_test *ctp __unused)
{
	void * __capability * __capability mb;
	void * __capability sh;
	const volatile struct caprevoke_info * __capability cri;
	void * __capability revme;
	struct caprevoke_stats crst;
	int kq;
	uint32_t cyc_start, cyc_end;

	kq = CHERITEST_CHECK_SYSCALL(kqueue());
	mb = CHERITEST_CHECK_SYSCALL(
	    mmap(0, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_ANON, -1, 0));
	CHERITEST_CHECK_SYSCALL(
	    caprevoke_shadow(CAPREVOKE_SHADOW_NOVMMAP, mb, &sh));

	CHERITEST_CHECK_SYSCALL(caprevoke_shadow(CAPREVOKE_SHADOW_INFO_STRUCT,
	    NULL, __DEQUALIFY_CAP(void * __capability *, &cri)));

	/*
	 * OK, armed with the shadow mapping... generate a capability to
	 * the 0th granule of the map, spill it to the 1st granule,
	 * stash it in the kqueue, and mark it as revoked in the shadow.
	 */
	revme = cheri_andperm(mb, ~CHERI_PERM_CHERIABI_VMMAP);
	((void * __capability *)mb)[1] = revme;
	install_kqueue_cap(kq, revme);

	((uint8_t * __capability)sh)[0] = 1;

	/*
	 * First, let's see if we can shoot down just the hoarders and not
	 * the VM.  We'll put the thing back and do a full pass momentarily.
	 */
	CHERITEST_CHECK_SYSCALL(caprevoke(CAPREVOKE_JUST_HOARDERS, 0, &crst));

	check_kqueue_cap(kq, 0);
	CHERITEST_VERIFY2(!check_revoked(mb[1]), "JUST cleared memory tag");

	/* OK, full pass */
	install_kqueue_cap(kq, revme);

	cyc_start = get_cyclecount();
	CHERITEST_CHECK_SYSCALL(
	    caprevoke(CAPREVOKE_LAST_PASS | CAPREVOKE_IGNORE_START, 0, &crst));
	cyc_end = get_cyclecount();

	fprintf_caprevoke_stats(stderr, crst, cyc_end - cyc_start);

	CHERITEST_VERIFY2(
	    cri->epoch_dequeue == crst.epoch_fini, "Bad shared clock");

	CHERITEST_VERIFY2(check_revoked(mb[1]), "Memory tag persists");
	check_kqueue_cap(kq, 0);

	/* Clear the revocation bit and do that again */
	((uint8_t * __capability)sh)[0] = 0;

	/*
	 * We don't derive exactly the same thing, to prevent CSE from
	 * firing.  More specifically, we adjust the offset first, taking
	 * the path through the commutation diagram that doesn't share an
	 * edge with the derivation above.
	 */
	revme = cheri_andperm(mb + 1, ~CHERI_PERM_CHERIABI_VMMAP);
	CHERITEST_VERIFY2(!check_revoked(revme), "Tag clear on 2nd revme?");
	((void * __capability *)mb)[1] = revme;
	install_kqueue_cap(kq, revme);

	cyc_start = get_cyclecount();
	CHERITEST_CHECK_SYSCALL(caprevoke(CAPREVOKE_IGNORE_START, 0, &crst));
	cyc_end = get_cyclecount();

	CHERITEST_VERIFY2(
	    crst.epoch_fini >= crst.epoch_init + 1, "Bad epoch clock state");
	fprintf_caprevoke_stats(stderr, crst, cyc_end - cyc_start);

	CHERITEST_VERIFY2(
	    cri->epoch_dequeue == crst.epoch_fini, "Bad shared clock");

	cyc_start = get_cyclecount();
	CHERITEST_CHECK_SYSCALL(
	    caprevoke(CAPREVOKE_LAST_PASS, crst.epoch_init, &crst));
	cyc_end = get_cyclecount();

	fprintf_caprevoke_stats(stderr, crst, cyc_end - cyc_start);

	CHERITEST_VERIFY2(
	    cri->epoch_dequeue == crst.epoch_fini, "Bad shared clock");

	CHERITEST_VERIFY2(!check_revoked(mb[1]), "Memory tag cleared");

	check_kqueue_cap(kq, 1);

	munmap(mb, PAGE_SIZE);
	close(kq);

	cheritest_success();
}
#endif
