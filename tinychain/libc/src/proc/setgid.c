#include "proc/setgid.h"

#include <arch/syscall.h>

int setgid(gid_t gid)
{
    return syscall1(SYS_setgid, (long)gid);
}
