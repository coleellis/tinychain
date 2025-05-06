#include "thread/fork.h"

#include <arch/syscall.h>

pid_t fork(void)
{
    return syscall0(SYS_fork);
}
