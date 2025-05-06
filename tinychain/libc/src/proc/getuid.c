#include "proc/getuid.h"

#include <arch/syscall.h>

uid_t getuid(void)
{
    return syscall0(SYS_getuid);
}
