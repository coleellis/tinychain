#include "sys/uname.h"

#include <arch/syscall.h>

int uname(struct utsname *buf)
{
    return syscall1(SYS_uname, (long)buf);
}
