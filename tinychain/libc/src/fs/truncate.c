#include "fs/truncate.h"

#include <arch/syscall.h>

int truncate(const char *path, off_t length)
{
    return syscall2(SYS_truncate, (long)path, (long)length);
}
