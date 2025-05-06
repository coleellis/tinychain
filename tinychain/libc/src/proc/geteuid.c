#include "proc/geteuid.h"

#include <arch/syscall.h>

uid_t geteuid(void)
{
    return syscall0(SYS_geteuid);
}
