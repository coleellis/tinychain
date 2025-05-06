#include "fs/stat.h"

#include <arch/syscall.h>

int stat(const char *pathname, struct stat *statbuf)
{
#ifdef __aarch64__
    // return fstatat(AT_FDCWD, pathname, statbuf, 0);
    return -1; // FIXME:: error for now
#else
    return syscall2(SYS_stat, (long)pathname, (long)statbuf);
#endif
}
