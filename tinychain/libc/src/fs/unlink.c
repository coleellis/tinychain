#include "fs/unlink.h"

#include <arch/syscall.h>

int unlink(const char *pathname)
{
    return syscall1(SYS_unlink, (long)pathname);
}
