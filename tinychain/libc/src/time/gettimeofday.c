#include "time/gettimeofday.h"

#include <arch/syscall.h>

int gettimeofday(struct timeval *tv, struct timezone *tz)
{
    return syscall2(SYS_gettimeofday, (long)tv, (long)tz);
}
