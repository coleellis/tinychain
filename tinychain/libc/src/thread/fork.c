#include "thread/fork.h"

#include <arch/syscall.h>

pid_t fork(void)
{
#if defined(__aarch64__)
    return -1; // FIXME: error for now
#else
    return syscall0(SYS_fork);
#endif
}
