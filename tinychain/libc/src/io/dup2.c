#include "io/dup2.h"

#include <arch/syscall.h>

int dup2(int oldfd, int newfd)
{
    return syscall2(SYS_dup2, (long)oldfd, (long)newfd);
}
