#include "fs/ftruncate.h"

#include <arch/syscall.h>

int ftruncate(int fd, off_t length)
{
    return syscall2(SYS_ftruncate, (long)fd, (long)length);
}
