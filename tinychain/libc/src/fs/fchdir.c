#include "fs/fchdir.h"

#include <arch/syscall.h>

int fchdir(int fd)
{
    return syscall1(SYS_fchdir, (long)fd);
}
