#include "io/tee.h"

#include <arch/syscall.h>

ssize_t tee(int fd_in, int fd_out, size_t len, unsigned int flags)
{
    return syscall4(SYS_tee, (long)fd_in, (long)fd_out, (long)len, (long)flags);
}
