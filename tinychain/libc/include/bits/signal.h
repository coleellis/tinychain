#pragma once

// Define __BITS_PER_LONG
#if defined(__x86_64__)
#define __BITS_PER_LONG 64
#else
#define __BITS_PER_LONG 32
#endif

// Define __NSIG_WORDS
#define _NSIG       64
#define _NSIG_BPW   __BITS_PER_LONG
#define _NSIG_WORDS (_NSIG / _NSIG_BPW)

#include <sys/types.h>

typedef struct
{
    unsigned long sig[_NSIG_WORDS];
} sigset_t;

union sigval
{
    int   sigval_int; /* Integer value */
    void *sigval_ptr; /* Pointer value */
};

typedef struct
{
    int          si_signo;  /* Signal number */
    int          si_code;   /* Signal code */
    pid_t        si_pid;    /* Sending process ID */
    uid_t        si_uid;    /* Real user ID of sending process */
    void        *si_addr;   /* Address of faulting instruction */
    int          si_status; /* Exit value or signal */
    union sigval si_value;  /* Signal value */
} siginfo_t;

struct sigaction
{
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
    sigset_t sa_mask;
    int      sa_flags;
    void (*sa_restorer)(void);
};

#define SIGHUP    1
#define SIGINT    2
#define SIGQUIT   3
#define SIGILL    4
#define SIGTRAP   5
#define SIGABRT   6
#define SIGIOT    6
#define SIGBUS    7
#define SIGFPE    8
#define SIGKILL   9
#define SIGUSR1   10
#define SIGSEGV   11
#define SIGUSR2   12
#define SIGPIPE   13
#define SIGALRM   14
#define SIGTERM   15
#define SIGSTKFLT 16
#define SIGCHLD   17
#define SIGCONT   18
#define SIGSTOP   19
#define SIGTSTP   20
#define SIGTTIN   21
#define SIGTTOU   22
#define SIGURG    23
#define SIGXCPU   24
#define SIGXFSZ   25
#define SIGVTALRM 26
#define SIGPROF   27
#define SIGWINCH  28
#define SIGIO     29
#define SIGPOLL   SIGIO
/*
#define SIGLOST		29
*/
#define SIGPWR    30
#define SIGSYS    31
#define SIGUNUSED 31
