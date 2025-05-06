#include "sys/kill.h"

#include <arch/syscall.h>

int kill(pid_t pid, int sig)
{
    return syscall2(SYS_kill, (long)pid, (long)sig);
}
