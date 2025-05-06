#include "sys/ptrace.h"

#include <arch/syscall.h>

long ptrace(size_t request, pid_t pid, void *addr, void *data)
{
    return syscall4(SYS_ptrace, (long)request, (long)pid, (long)addr, (long)data);
}
