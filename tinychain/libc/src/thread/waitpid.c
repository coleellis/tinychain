#include "thread/waitpid.h"

#include <arch/syscall.h>
#include <stddef.h>
#include <thread/wait4.h>

pid_t waitpid(pid_t pid, int *wstatus, int options)
{
    return wait4(pid, wstatus, options, NULL);
}
