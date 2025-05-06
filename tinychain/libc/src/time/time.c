#include "time/time.h"

#include <arch/syscall.h>
#if defined(__aarch64__) || defined(__arm__)
#include <time/clock_gettime.h>
#endif

time_t time(time_t *tloc)
{
#if defined(__aarch64__) || defined(__arm__)
    struct timespec ts;
    if (clock_gettime(CLOCK_REALTIME, &ts) < 0)
        return (time_t)-1;
    if (tloc)
        *tloc = ts.tv_sec;
    return ts.tv_sec;
#else
    return syscall1(SYS_time, (long)tloc);
#endif
}
