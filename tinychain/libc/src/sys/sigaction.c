#include "sys/sigaction.h"

#include <arch/syscall.h>

int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact)
{
    return syscall4(SYS_rt_sigaction, (long)signum, (long)act, (long)oldact, sizeof(sigset_t));
}
