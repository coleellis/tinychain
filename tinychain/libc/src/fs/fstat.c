#include "fs/fstat.h"

#include <arch/syscall.h>

int fstat(int fd, struct stat *statbuf)
{
#ifdef __aarch64__
    // return fstatat(fd, "", statbuf, AT_EMPTY_PATH);
    return -1; // FIXME: error for now
#else
    return syscall2(SYS_fstat, (long)fd, (long)statbuf);
#endif
}
