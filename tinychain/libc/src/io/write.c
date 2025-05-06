#include "io/write.h"

#include <arch/syscall.h>

ssize_t write(int fd, const void *buf, size_t count)
{
    long ret = syscall3(SYS_write, (long)fd, (long)buf, (long)count);
    return (ssize_t)ret;
}
