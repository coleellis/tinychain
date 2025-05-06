#include "sys/setrlimit.h"

#include <arch/syscall.h>

int setrlimit(int resource, const struct rlimit *rlim)
{
    return syscall2(SYS_setrlimit, (long)resource, (long)rlim);
}
