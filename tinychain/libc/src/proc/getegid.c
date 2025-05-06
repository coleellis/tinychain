#include "proc/getegid.h"

#include <arch/syscall.h>

gid_t getegid(void)
{
    return syscall0(SYS_getegid);
}
