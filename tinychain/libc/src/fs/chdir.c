#include "fs/chdir.h"

#include <arch/syscall.h>

int chdir(const char *path)
{
    return syscall1(SYS_chdir, (long)path);
}
