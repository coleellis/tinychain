#ifndef TIME_CLOCK_GETTIME_H
#define TIME_CLOCK_GETTIME_H

#include <bits/time.h>
#include <sys/types.h>

int clock_gettime(clockid_t clockid, struct timespec *tp);

#endif // TIME_CLOCK_GETTIME_H
