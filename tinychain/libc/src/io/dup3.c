#include "io/dup3.h"

#include <arch/syscall.h>

int dup3(int oldfd, int newfd, int flags)
{
    return syscall3(SYS_dup3, (long)oldfd, (long)newfd, (long)flags);
}
