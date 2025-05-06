#include "proc/getppid.h"

#include <arch/syscall.h>

pid_t getppid(void)
{
    return syscall0(SYS_getppid);
}
