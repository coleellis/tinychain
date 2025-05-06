#include "fs/lseek.h"

#include <arch/syscall.h>

off_t lseek(int fd, off_t offset, int whence)
{
    return syscall3(SYS_lseek, (long)fd, (long)offset, (long)whence);
}
