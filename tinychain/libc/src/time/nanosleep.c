#include "time/nanosleep.h"

#include <arch/syscall.h>

int nanosleep(const struct timespec *req, struct timespec *rem)
{
    return syscall2(SYS_nanosleep, (long)req, (long)rem);
}
