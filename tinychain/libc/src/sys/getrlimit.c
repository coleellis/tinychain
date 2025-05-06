#include "sys/getrlimit.h"

#include <arch/syscall.h>

int getrlimit(int resource, struct rlimit *rlim)
{
#if defined(__aarch64__) || defined(__arm__)
    return syscall4(SYS_prlimit64, 0, resource, 0, (long)rlim);
#else
    return syscall2(SYS_getrlimit, (long)resource, (long)rlim);
#endif
}
