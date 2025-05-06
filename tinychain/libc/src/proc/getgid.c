#include "proc/getgid.h"

#include <arch/syscall.h>

gid_t getgid(void)
{
    return syscall0(SYS_getgid);
}
