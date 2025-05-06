#include "time/clock_gettime.h"

#include <arch/syscall.h>

int clock_gettime(clockid_t clockid, struct timespec *tp)
{
    return syscall2(SYS_clock_gettime, (long)clockid, (long)tp);
}
