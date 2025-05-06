#include "fs/fstat.h"

#include <arch/syscall.h>

int fstat(int fd, struct stat *statbuf)
{
    return syscall2(SYS_fstat, (long)fd, (long)statbuf);
}
