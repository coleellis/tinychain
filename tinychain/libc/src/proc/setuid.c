#include "proc/setuid.h"

#include <arch/syscall.h>

int setuid(uid_t uid)
{
    return syscall1(SYS_setuid, (long)uid);
}
