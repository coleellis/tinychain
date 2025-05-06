#include "io/dup.h"

#include <arch/syscall.h>

int dup(int oldfd)
{
    return syscall1(SYS_dup, (long)oldfd);
}
