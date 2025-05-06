#include "sys/getrlimit.h"

#include <arch/syscall.h>

int getrlimit(int resource, struct rlimit *rlim)
{
    return syscall2(SYS_getrlimit, (long)resource, (long)rlim);
}
