#include "fs/rmdir.h"

#include <arch/syscall.h>

int rmdir(const char *pathname)
{
    return syscall1(SYS_rmdir, (long)pathname);
}
