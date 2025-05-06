#include "fs/lstat.h"

#include <arch/syscall.h>

int lstat(const char *pathname, struct stat *statbuf)
{
#ifdef __aarch64__
    // return fstatat(AT_FDCWD, pathname, statbuf, AT_SYMLINK_NOFOLLOW);
    return -1; // FIXME: Return error for now
#else
    return syscall2(SYS_lstat, (long)pathname, (long)statbuf);
#endif
}
