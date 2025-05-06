#include "sys/sigprocmask.h"

#include <arch/syscall.h>

int sigprocmask(int how, const sigset_t *set, sigset_t *oldset)
{
    return syscall4(SYS_rt_sigprocmask, (long)how, (long)set, (long)oldset, sizeof(sigset_t));
}
