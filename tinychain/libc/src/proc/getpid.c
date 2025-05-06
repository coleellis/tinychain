#include "proc/getpid.h"

#include <arch/syscall.h>

pid_t getpid(void)
{
    return syscall0(SYS_getpid);
}
