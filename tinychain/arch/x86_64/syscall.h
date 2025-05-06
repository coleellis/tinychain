#ifndef ARCH_X86_64_SYSCALL_H
#define ARCH_X86_64_SYSCALL_H

/* Syscall numbers */

#define SYS_read           0
#define SYS_write          1
#define SYS_open           2
#define SYS_close          3
#define SYS_stat           4
#define SYS_fstat          5
#define SYS_lstat          6
#define SYS_poll           7
#define SYS_lseek          8
#define SYS_mmap           9
#define SYS_mprotect       10
#define SYS_munmap         11
#define SYS_brk            12
#define SYS_rt_sigaction   13
#define SYS_rt_sigprocmask 14
#define SYS_rt_sigreturn   15
#define SYS_ioctl          16
#define SYS_pread64        17
#define SYS_pwrite64       18
#define SYS_readv          19
#define SYS_writev         20
#define SYS_access         21
#define SYS_pipe           22
#define SYS_select         23
#define SYS_sched_yield    24
#define SYS_mremap         25
#define SYS_msync          26
#define SYS_mincore        27
#define SYS_madvise        28
#define SYS_shmget         29
#define SYS_shmat          30
#define SYS_shmctl         31
#define SYS_dup            32
#define SYS_dup2           33
#define SYS_pause          34
#define SYS_nanosleep      35
#define SYS_getitimer      36
#define SYS_alarm          37
#define SYS_setitimer      38
#define SYS_getpid         39
#define SYS_sendfile       40
#define SYS_socket         41
#define SYS_connect        42
#define SYS_accept         43
#define SYS_sendto         44
#define SYS_recvfrom       45
#define SYS_sendmsg        46
#define SYS_recvmsg        47
#define SYS_shutdown       48
#define SYS_bind           49
#define SYS_listen         50
#define SYS_getsockname    51
#define SYS_getpeername    52
#define SYS_socketpair     53
#define SYS_setsockopt     54
#define SYS_getsockopt     55
#define SYS_clone          56
#define SYS_fork           57
#define SYS_exit           60
#define SYS_wait4          61
#define SYS_kill           62
#define SYS_uname          63
#define SYS_semget         64
#define SYS_semop          65
#define SYS_semctl         66
#define SYS_shmdt          67
#define SYS_msgget         68
#define SYS_msgsnd         69
#define SYS_msgrcv         70
#define SYS_msgctl         71
#define SYS_fcntl          72
#define SYS_flock          73
#define SYS_fsync          74
#define SYS_fdatasync      75
#define SYS_truncate       76
#define SYS_ftruncate      77
#define SYS_getdents       78
#define SYS_getcwd         79
#define SYS_chdir          80
#define SYS_fchdir         81
#define SYS_rename         82
#define SYS_mkdir          83
#define SYS_rmdir          84
#define SYS_creat          85
#define SYS_link           86
#define SYS_unlink         87
#define SYS_symlink        88
#define SYS_readlink       89
#define SYS_chmod          90
#define SYS_fchmod         91
#define SYS_chown          92
#define SYS_fchown         93
#define SYS_lchown         94
#define SYS_unask          95
#define SYS_gettimeofday   96
#define SYS_getrlimit      97
#define SYS_getrusage      98
#define SYS_sysinfo        99
#define SYS_times          100
#define SYS_ptrace         101
#define SYS_getuid         102
#define SYS_syslog         103
#define SYS_getgid         104
#define SYS_setuid         105
#define SYS_setgid         106
#define SYS_geteuid        107
#define SYS_getegid        108
#define SYS_setpgid        109
#define SYS_getppid        110
#define SYS_getpgrp        111
#define SYS_setsid         112
#define SYS_setreuid       113
#define SYS_setregid       114
#define SYS_getgroups      115
#define SYS_setgroups      116
#define SYS_setresuid      117
#define SYS_getresuid      118
#define SYS_setresgid      119
#define SYS_getresgid      120
#define SYS_getpgid        121
#define SYS_setfsuid       122
#define SYS_setfsgid       123
#define SYS_getsid         124
#define SYS_mlock          149
#define SYS_munlock        150
#define SYS_setrlimit      160
#define SYS_time           201
#define SYS_clock_gettime  228
#define SYS_splice         275
#define SYS_tee            276
#define SYS_vmsplice       278
#define SYS_dup3           292

/* Syscall functions */

static inline long syscall0(long n)
{
    long ret;
    __asm__ volatile("syscall" : "=a"(ret) : "a"(n) : "memory", "cc");
    return ret;
}

static inline long syscall1(long n, long arg1)
{
    long ret;
    __asm__ volatile("syscall" : "=a"(ret) : "a"(n), "D"(arg1) : "memory", "cc");
    return ret;
}

static inline long syscall2(long n, long arg1, long arg2)
{
    long ret;
    __asm__ volatile("syscall" : "=a"(ret) : "a"(n), "D"(arg1), "S"(arg2) : "memory", "cc");
    return ret;
}

static inline long syscall3(long n, long arg1, long arg2, long arg3)
{
    long ret;
    __asm__ volatile("syscall"
        : "=a"(ret)
        : "a"(n), "D"(arg1), "S"(arg2), "d"(arg3)
        : "memory", "cc");
    return ret;
}

static inline long syscall4(long n, long arg1, long arg2, long arg3, long arg4)
{
    register long r10 __asm__("r10") = arg4;

    long ret;
    __asm__ volatile("syscall"
        : "=a"(ret)
        : "a"(n), "D"(arg1), "S"(arg2), "d"(arg3), "r"(r10)
        : "rcx", "r11", "memory", "cc");
    return ret;
}

static inline long syscall5(long n, long arg1, long arg2, long arg3, long arg4, long arg5)
{
    register long r10 __asm__("r10") = arg4;
    register long r8 __asm__("r8")   = arg5;

    long ret;
    __asm__ volatile("syscall"
        : "=a"(ret)
        : "a"(n), "D"(arg1), "S"(arg2), "d"(arg3), "r"(r10), "r"(r8)
        : "rcx", "r11", "memory", "cc");
    return ret;
}

static inline long syscall6(
    long n, long arg1, long arg2, long arg3, long arg4, long arg5, long arg6)
{
    register long r10 __asm__("r10") = arg4;
    register long r8 __asm__("r8")   = arg5;
    register long r9 __asm__("r9")   = arg6;

    long ret;
    __asm__ volatile("syscall"
        : "=a"(ret)
        : "a"(n), "D"(arg1), "S"(arg2), "d"(arg3), "r"(r10), "r"(r8), "r"(r9)
        : "rcx", "r11", "memory", "cc");
    return ret;
}

#endif // ARCH_X86_64_SYSCALL_H
