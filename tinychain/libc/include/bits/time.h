#pragma once

#include <sys/types.h>

/*
 * The IDs of the various system clocks
 */
#define CLOCK_REALTIME           0
#define CLOCK_MONOTONIC          1
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_THREAD_CPUTIME_ID  3
#define CLOCK_MONOTONIC_RAW      4
#define CLOCK_REALTIME_COARSE    5
#define CLOCK_MONOTONIC_COARSE   6
#define CLOCK_BOOTTIME           7
#define CLOCK_REALTIME_ALARM     8
#define CLOCK_BOOTTIME_ALARM     9

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
