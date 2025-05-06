#include "fs/close.h"

#include <arch/syscall.h>

int close(int fd)
{
    long ret = syscall1(SYS_close, (long)fd);
    return (int)ret;
}
