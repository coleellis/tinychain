#include "fs/lstat.h"

#include <arch/syscall.h>

int lstat(const char *pathname, struct stat *statbuf)
{
    return syscall2(SYS_lstat, (long)pathname, (long)statbuf);
}
