#pragma once

#include <sys/types.h>

typedef long suseconds_t;

struct timespec
{
    time_t tv_sec;  /* seconds */
    long   tv_nsec; /* nanoseconds */
};

struct timeval
{
    time_t      tv_sec;  /* Seconds */
    suseconds_t tv_usec; /* Microseconds */
};

struct timezone
{
    int tz_minuteswest; /* minutes west of Greenwich */
    int tz_dsttime;     /* type of dst correction */
};
