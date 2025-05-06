#include "time/time.h"

#include <arch/syscall.h>

time_t time(time_t *tloc)
{
    return syscall1(SYS_time, (long)tloc);
}
