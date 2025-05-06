#include "io/splice.h"

#include <arch/syscall.h>

ssize_t splice(int fd_in, off_t *off_in, int fd_out, off_t *off_out, size_t len, unsigned int flags)
{
    return syscall6(
        SYS_splice, (long)fd_in, (long)off_in, (long)fd_out, (long)off_out, (long)len, (long)flags);
}
