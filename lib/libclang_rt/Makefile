# $FreeBSD$

.if ${MACHINE_CPUARCH} == "amd64" || ${MACHINE_CPUARCH} == "i386" || \
    ${MACHINE_ARCH:Mmips64*}
SUBDIR+=	include
SUBDIR+=	asan
SUBDIR+=	asan-preinit
SUBDIR+=	asan_cxx
SUBDIR+=	asan_dynamic
SUBDIR+=	cfi
SUBDIR+=	cfi_diag
SUBDIR+=	safestack
SUBDIR+=	stats
SUBDIR+=	stats_client
.if ${MACHINE_CPUARCH} == "amd64" || ${MACHINE_ARCH:Mmips64*}
SUBDIR+=	tsan
SUBDIR+=	tsan_cxx
.endif
SUBDIR+=	ubsan_minimal
SUBDIR+=	ubsan_standalone
SUBDIR+=	ubsan_standalone_cxx
.endif # amd64 || i386

.if ${MACHINE_CPUARCH} == "amd64"
SUBDIR+=	dd
SUBDIR+=	fuzzer
SUBDIR+=	fuzzer_no_main
SUBDIR+=	msan
SUBDIR+=	msan_cxx
SUBDIR+=	xray
SUBDIR+=	xray-basic
SUBDIR+=	xray-fdr
SUBDIR+=	xray-profiling
.endif # amd64

SUBDIR+=	profile

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
