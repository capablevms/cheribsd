/*
 * System call argument map.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 */

#ifndef _FREEBSD64_SYSARGMAP_H_
#define	_FREEBSD64_SYSARGMAP_H_

int freebsd64_sysargmask[] = {
 [FREEBSD64_SYS_exit] = (0x0),
 [FREEBSD64_SYS_freebsd64_read] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_write] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_open] = (0x0 | 0x1),
 [FREEBSD64_SYS_close] = (0x0),
 [FREEBSD64_SYS_freebsd64_wait4] = (0x0 | 0x2 | 0x8),
 [FREEBSD64_SYS_freebsd64_link] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_unlink] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_chdir] = (0x0 | 0x1),
 [FREEBSD64_SYS_fchdir] = (0x0),
 [FREEBSD64_SYS_freebsd64_chmod] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_chown] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_break] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_mount] = (0x0 | 0x1 | 0x2 | 0x8),
 [FREEBSD64_SYS_freebsd64_unmount] = (0x0 | 0x1),
 [FREEBSD64_SYS_setuid] = (0x0),
 [FREEBSD64_SYS_freebsd64_ptrace] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_recvmsg] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_sendmsg] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_recvfrom] = (0x0 | 0x2 | 0x10 | 0x20),
 [FREEBSD64_SYS_freebsd64_accept] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_getpeername] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_getsockname] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_access] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_chflags] = (0x0 | 0x1),
 [FREEBSD64_SYS_fchflags] = (0x0),
 [FREEBSD64_SYS_kill] = (0x0),
 [FREEBSD64_SYS_dup] = (0x0),
 [FREEBSD64_SYS_freebsd64_profil] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_ktrace] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_getlogin] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_setlogin] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_acct] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_sigaltstack] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_ioctl] = (0x0 | 0x4),
 [FREEBSD64_SYS_reboot] = (0x0),
 [FREEBSD64_SYS_freebsd64_revoke] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_symlink] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_readlink] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_execve] = (0x0 | 0x1 | 0x2 | 0x4),
 [FREEBSD64_SYS_umask] = (0x0),
 [FREEBSD64_SYS_freebsd64_chroot] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_msync] = (0x0 | 0x1),
 [FREEBSD64_SYS_sbrk] = (0x0),
 [FREEBSD64_SYS_sstk] = (0x0),
 [FREEBSD64_SYS_freebsd64_munmap] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_mprotect] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_madvise] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_mincore] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_getgroups] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_setgroups] = (0x0 | 0x2),
 [FREEBSD64_SYS_setpgid] = (0x0),
 [FREEBSD64_SYS_freebsd64_setitimer] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_swapon] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_getitimer] = (0x0 | 0x2),
 [FREEBSD64_SYS_dup2] = (0x0),
 [FREEBSD64_SYS_freebsd64_fcntl] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_select] = (0x0 | 0x2 | 0x4 | 0x8 | 0x10),
 [FREEBSD64_SYS_fsync] = (0x0),
 [FREEBSD64_SYS_setpriority] = (0x0),
 [FREEBSD64_SYS_socket] = (0x0),
 [FREEBSD64_SYS_freebsd64_connect] = (0x0 | 0x2),
 [FREEBSD64_SYS_getpriority] = (0x0),
 [FREEBSD64_SYS_freebsd64_bind] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_setsockopt] = (0x0 | 0x8),
 [FREEBSD64_SYS_listen] = (0x0),
 [FREEBSD64_SYS_freebsd64_gettimeofday] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_getrusage] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_getsockopt] = (0x0 | 0x8 | 0x10),
 [FREEBSD64_SYS_freebsd64_readv] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_writev] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_settimeofday] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_fchown] = (0x0),
 [FREEBSD64_SYS_fchmod] = (0x0),
 [FREEBSD64_SYS_setreuid] = (0x0),
 [FREEBSD64_SYS_setregid] = (0x0),
 [FREEBSD64_SYS_freebsd64_rename] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_flock] = (0x0),
 [FREEBSD64_SYS_freebsd64_mkfifo] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_sendto] = (0x0 | 0x2 | 0x10),
 [FREEBSD64_SYS_shutdown] = (0x0),
 [FREEBSD64_SYS_freebsd64_socketpair] = (0x0 | 0x8),
 [FREEBSD64_SYS_freebsd64_mkdir] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_rmdir] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_utimes] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_adjtime] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_quotactl] = (0x0 | 0x1 | 0x8),
 [FREEBSD64_SYS_freebsd64_nlm_syscall] = (0x0 | 0x8),
 [FREEBSD64_SYS_freebsd64_nfssvc] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_lgetfh] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_getfh] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_sysarch] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_rtprio] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_semsys] = (0x0 | 0x2 | 0x4 | 0x8 | 0x10),
 [FREEBSD64_SYS_freebsd64_msgsys] = (0x0 | 0x2 | 0x4 | 0x8 | 0x10 | 0x20),
 [FREEBSD64_SYS_freebsd64_shmsys] = (0x0 | 0x2 | 0x4 | 0x8),
 [FREEBSD64_SYS_setfib] = (0x0),
 [FREEBSD64_SYS_freebsd64_ntp_adjtime] = (0x0 | 0x1),
 [FREEBSD64_SYS_setgid] = (0x0),
 [FREEBSD64_SYS_setegid] = (0x0),
 [FREEBSD64_SYS_seteuid] = (0x0),
 [FREEBSD64_SYS_freebsd64_pathconf] = (0x0 | 0x1),
 [FREEBSD64_SYS_fpathconf] = (0x0),
 [FREEBSD64_SYS_getrlimit] = (0x0 | 0x2),
 [FREEBSD64_SYS_setrlimit] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64___sysctl] = (0x0 | 0x1 | 0x4 | 0x8 | 0x10),
 [FREEBSD64_SYS_freebsd64_mlock] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_munlock] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_undelete] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_futimes] = (0x0 | 0x2),
 [FREEBSD64_SYS_getpgid] = (0x0),
 [FREEBSD64_SYS_freebsd64_poll] = (0x0 | 0x1),
 [FREEBSD64_SYS_semget] = (0x0),
 [FREEBSD64_SYS_freebsd64_semop] = (0x0 | 0x2),
 [FREEBSD64_SYS_msgget] = (0x0),
 [FREEBSD64_SYS_freebsd64_msgsnd] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_msgrcv] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_shmat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_shmdt] = (0x0 | 0x1),
 [FREEBSD64_SYS_shmget] = (0x0),
 [FREEBSD64_SYS_freebsd64_clock_gettime] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_clock_settime] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_clock_getres] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_ktimer_create] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_ktimer_delete] = (0x0),
 [FREEBSD64_SYS_freebsd64_ktimer_settime] = (0x0 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_ktimer_gettime] = (0x0 | 0x2),
 [FREEBSD64_SYS_ktimer_getoverrun] = (0x0),
 [FREEBSD64_SYS_freebsd64_nanosleep] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_ffclock_getcounter] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_ffclock_setestimate] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_ffclock_getestimate] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_clock_nanosleep] = (0x0 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_clock_getcpuclockid2] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_ntp_gettime] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_minherit] = (0x0 | 0x1),
 [FREEBSD64_SYS_rfork] = (0x0),
 [FREEBSD64_SYS_freebsd64_lchown] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_aio_read] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_aio_write] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_lio_listio] = (0x0 | 0x2 | 0x8),
 [FREEBSD64_SYS_freebsd64_kbounce] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_lchmod] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_lutimes] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_preadv] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_pwritev] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_fhopen] = (0x0 | 0x1),
 [FREEBSD64_SYS_modnext] = (0x0),
 [FREEBSD64_SYS_freebsd64_modstat] = (0x0 | 0x2),
 [FREEBSD64_SYS_modfnext] = (0x0),
 [FREEBSD64_SYS_freebsd64_modfind] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_kldload] = (0x0 | 0x1),
 [FREEBSD64_SYS_kldunload] = (0x0),
 [FREEBSD64_SYS_freebsd64_kldfind] = (0x0 | 0x1),
 [FREEBSD64_SYS_kldnext] = (0x0),
 [FREEBSD64_SYS_freebsd64_kldstat] = (0x0 | 0x2),
 [FREEBSD64_SYS_kldfirstmod] = (0x0),
 [FREEBSD64_SYS_getsid] = (0x0),
 [FREEBSD64_SYS_setresuid] = (0x0),
 [FREEBSD64_SYS_setresgid] = (0x0),
 [FREEBSD64_SYS_freebsd64_aio_return] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_aio_suspend] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_aio_cancel] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_aio_error] = (0x0 | 0x1),
 [FREEBSD64_SYS_mlockall] = (0x0),
 [FREEBSD64_SYS_freebsd64___getcwd] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_sched_setparam] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_sched_getparam] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_sched_setscheduler] = (0x0 | 0x4),
 [FREEBSD64_SYS_sched_getscheduler] = (0x0),
 [FREEBSD64_SYS_sched_get_priority_max] = (0x0),
 [FREEBSD64_SYS_sched_get_priority_min] = (0x0),
 [FREEBSD64_SYS_freebsd64_sched_rr_get_interval] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_utrace] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_kldsym] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_jail] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_nnpfs_syscall] = (0x0 | 0x2 | 0x8),
 [FREEBSD64_SYS_freebsd64_sigprocmask] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_sigsuspend] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_sigpending] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_sigtimedwait] = (0x0 | 0x1 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_sigwaitinfo] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64___acl_get_file] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64___acl_set_file] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64___acl_get_fd] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64___acl_set_fd] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64___acl_delete_file] = (0x0 | 0x1),
 [FREEBSD64_SYS___acl_delete_fd] = (0x0),
 [FREEBSD64_SYS_freebsd64___acl_aclcheck_file] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64___acl_aclcheck_fd] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_extattrctl] = (0x0 | 0x1 | 0x4 | 0x10),
 [FREEBSD64_SYS_freebsd64_extattr_set_file] = (0x0 | 0x1 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_extattr_get_file] = (0x0 | 0x1 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_extattr_delete_file] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_aio_waitcomplete] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_getresuid] = (0x0 | 0x1 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_getresgid] = (0x0 | 0x1 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_extattr_set_fd] = (0x0 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_extattr_get_fd] = (0x0 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_extattr_delete_fd] = (0x0 | 0x4),
 [FREEBSD64_SYS___setugid] = (0x0),
 [FREEBSD64_SYS_freebsd64_eaccess] = (0x0 | 0x1),
 [FREEBSD64_SYS_afs3_syscall] = (0x0),
 [FREEBSD64_SYS_freebsd64_nmount] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64___mac_get_proc] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64___mac_set_proc] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64___mac_get_fd] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64___mac_get_file] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64___mac_set_fd] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64___mac_set_file] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_kenv] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_lchflags] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_uuidgen] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_sendfile] = (0x0 | 0x10 | 0x20),
 [FREEBSD64_SYS_freebsd64_mac_syscall] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_ksem_close] = (0x0),
 [FREEBSD64_SYS_ksem_post] = (0x0),
 [FREEBSD64_SYS_ksem_wait] = (0x0),
 [FREEBSD64_SYS_ksem_trywait] = (0x0),
 [FREEBSD64_SYS_freebsd64_ksem_init] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_ksem_open] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_ksem_unlink] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_ksem_getvalue] = (0x0 | 0x2),
 [FREEBSD64_SYS_ksem_destroy] = (0x0),
 [FREEBSD64_SYS_freebsd64___mac_get_pid] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64___mac_get_link] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64___mac_set_link] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_extattr_set_link] = (0x0 | 0x1 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_extattr_get_link] = (0x0 | 0x1 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_extattr_delete_link] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64___mac_execve] = (0x0 | 0x1 | 0x2 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_sigaction] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_sigreturn] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_getcontext] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_setcontext] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_swapcontext] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_swapoff] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64___acl_get_link] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64___acl_set_link] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64___acl_delete_link] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64___acl_aclcheck_link] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_sigwait] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_thr_create] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_thr_exit] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_thr_self] = (0x0 | 0x1),
 [FREEBSD64_SYS_thr_kill] = (0x0),
 [FREEBSD64_SYS_jail_attach] = (0x0),
 [FREEBSD64_SYS_freebsd64_extattr_list_fd] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_extattr_list_file] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_extattr_list_link] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_ksem_timedwait] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_thr_suspend] = (0x0 | 0x1),
 [FREEBSD64_SYS_thr_wake] = (0x0),
 [FREEBSD64_SYS_kldunloadf] = (0x0),
 [FREEBSD64_SYS_freebsd64_audit] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_auditon] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_getauid] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_setauid] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_getaudit] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_setaudit] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_getaudit_addr] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_setaudit_addr] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_auditctl] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64__umtx_op] = (0x0 | 0x1 | 0x8 | 0x10),
 [FREEBSD64_SYS_freebsd64_thr_new] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_sigqueue] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_kmq_open] = (0x0 | 0x1 | 0x8),
 [FREEBSD64_SYS_freebsd64_kmq_setattr] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_kmq_timedreceive] = (0x0 | 0x2 | 0x8 | 0x10),
 [FREEBSD64_SYS_freebsd64_kmq_timedsend] = (0x0 | 0x2 | 0x10),
 [FREEBSD64_SYS_freebsd64_kmq_notify] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_kmq_unlink] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_abort2] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_thr_set_name] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_aio_fsync] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_rtprio_thread] = (0x0 | 0x4),
 [FREEBSD64_SYS_sctp_peeloff] = (0x0),
 [FREEBSD64_SYS_freebsd64_sctp_generic_sendmsg] = (0x0 | 0x2 | 0x8 | 0x20),
 [FREEBSD64_SYS_freebsd64_sctp_generic_sendmsg_iov] = (0x0 | 0x2 | 0x8 | 0x20),
 [FREEBSD64_SYS_freebsd64_sctp_generic_recvmsg] = (0x0 | 0x2 | 0x8 | 0x10 | 0x20 | 0x40),
 [FREEBSD64_SYS_freebsd64_pread] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_pwrite] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_mmap] = (0x0 | 0x1),
 [FREEBSD64_SYS_lseek] = (0x0),
 [FREEBSD64_SYS_freebsd64_truncate] = (0x0 | 0x1),
 [FREEBSD64_SYS_ftruncate] = (0x0),
 [FREEBSD64_SYS_thr_kill2] = (0x0),
 [FREEBSD64_SYS_freebsd64_shm_unlink] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_cpuset] = (0x0 | 0x1),
 [FREEBSD64_SYS_cpuset_setid] = (0x0),
 [FREEBSD64_SYS_freebsd64_cpuset_getid] = (0x0 | 0x8),
 [FREEBSD64_SYS_freebsd64_cpuset_getaffinity] = (0x0 | 0x10),
 [FREEBSD64_SYS_freebsd64_cpuset_setaffinity] = (0x0 | 0x10),
 [FREEBSD64_SYS_freebsd64_faccessat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_fchmodat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_fchownat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_fexecve] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_futimesat] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_linkat] = (0x0 | 0x2 | 0x8),
 [FREEBSD64_SYS_freebsd64_mkdirat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_mkfifoat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_openat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_readlinkat] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_renameat] = (0x0 | 0x2 | 0x8),
 [FREEBSD64_SYS_freebsd64_symlinkat] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_unlinkat] = (0x0 | 0x2),
 [FREEBSD64_SYS_posix_openpt] = (0x0),
 [FREEBSD64_SYS_freebsd64_gssd_syscall] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_jail_get] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_jail_set] = (0x0 | 0x1),
 [FREEBSD64_SYS_jail_remove] = (0x0),
 [FREEBSD64_SYS_closefrom] = (0x0),
 [FREEBSD64_SYS_freebsd64___semctl] = (0x0 | 0x8),
 [FREEBSD64_SYS_freebsd64_msgctl] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_shmctl] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_lpathconf] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64___cap_rights_get] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_cap_getmode] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_pdfork] = (0x0 | 0x1),
 [FREEBSD64_SYS_pdkill] = (0x0),
 [FREEBSD64_SYS_freebsd64_pdgetpid] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_pselect] = (0x0 | 0x2 | 0x4 | 0x8 | 0x10 | 0x20),
 [FREEBSD64_SYS_freebsd64_getloginclass] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_setloginclass] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_rctl_get_racct] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_rctl_get_rules] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_rctl_get_limits] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_rctl_add_rule] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_rctl_remove_rule] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_posix_fallocate] = (0x0),
 [FREEBSD64_SYS_posix_fadvise] = (0x0),
 [FREEBSD64_SYS_freebsd64_wait6] = (0x0 | 0x4 | 0x10 | 0x20),
 [FREEBSD64_SYS_freebsd64_cap_rights_limit] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_cap_ioctls_limit] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_cap_ioctls_get] = (0x0 | 0x2),
 [FREEBSD64_SYS_cap_fcntls_limit] = (0x0),
 [FREEBSD64_SYS_freebsd64_cap_fcntls_get] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_bindat] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_connectat] = (0x0 | 0x4),
 [FREEBSD64_SYS_freebsd64_chflagsat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_accept4] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_pipe2] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_aio_mlock] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_procctl] = (0x0 | 0x8),
 [FREEBSD64_SYS_freebsd64_ppoll] = (0x0 | 0x1 | 0x4 | 0x8),
 [FREEBSD64_SYS_freebsd64_futimens] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_utimensat] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_fdatasync] = (0x0),
 [FREEBSD64_SYS_freebsd64_fstat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_fstatat] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_fhstat] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_getdirentries] = (0x0 | 0x2 | 0x8),
 [FREEBSD64_SYS_freebsd64_statfs] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_fstatfs] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_getfsstat] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_fhstatfs] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_mknodat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_kevent] = (0x0 | 0x2 | 0x8 | 0x20),
 [FREEBSD64_SYS_freebsd64_cpuset_getdomain] = (0x0 | 0x10 | 0x20),
 [FREEBSD64_SYS_freebsd64_cpuset_setdomain] = (0x0 | 0x10),
 [FREEBSD64_SYS_freebsd64_getrandom] = (0x0 | 0x1),
 [FREEBSD64_SYS_freebsd64_getfhat] = (0x0 | 0x2 | 0x4),
 [FREEBSD64_SYS_freebsd64_fhlink] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_fhlinkat] = (0x0 | 0x1 | 0x4),
 [FREEBSD64_SYS_freebsd64_fhreadlink] = (0x0 | 0x1 | 0x2),
 [FREEBSD64_SYS_freebsd64_funlinkat] = (0x0 | 0x2),
 [FREEBSD64_SYS_freebsd64_copy_file_range] = (0x0 | 0x2 | 0x8),
 [FREEBSD64_SYS_freebsd64___sysctlbyname] = (0x0 | 0x1 | 0x4 | 0x8 | 0x10),
 [FREEBSD64_SYS_freebsd64_shm_open2] = (0x0 | 0x1 | 0x10),
};

#endif /* !_FREEBSD64_SYSARGMAP_H_ */
