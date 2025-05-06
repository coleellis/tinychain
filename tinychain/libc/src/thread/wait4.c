#include "thread/wait4.h"

#include <arch/syscall.h>

pid_t wait4(pid_t pid, int *wstatus, int options, struct rusage *rusage)
{
    return syscall4(SYS_wait4, (long)pid, (long)wstatus, (long)options, (long)rusage);
}
