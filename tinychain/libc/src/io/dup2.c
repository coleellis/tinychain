#include "io/dup2.h"

#include <arch/syscall.h>

int dup2(int oldfd, int newfd)
{
#if defined(__aarch64__)
    // dup3 with flags
    return -1; // FIXME: error for now
#else
    return syscall2(SYS_dup2, (long)oldfd, (long)newfd);
#endif
}
