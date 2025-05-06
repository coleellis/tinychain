#include "io/read.h"

#include <arch/syscall.h>

ssize_t read(int fd, void *buf, size_t count)
{
    long ret = syscall3(SYS_read, (long)fd, (long)buf, (long)count);
    return (ssize_t)ret;
}
