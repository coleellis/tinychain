#include "fs/stat.h"

#include <arch/syscall.h>

int stat(const char *pathname, struct stat *statbuf)
{
    return syscall2(SYS_stat, (long)pathname, (long)statbuf);
}
