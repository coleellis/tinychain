#ifndef TIME_NANOSLEEP_H
#define TIME_NANOSLEEP_H

#include <bits/time.h>
#include <sys/types.h>

int nanosleep(const struct timespec *req, struct timespec *rem);

#endif // TIME_NANOSLEEP_H
