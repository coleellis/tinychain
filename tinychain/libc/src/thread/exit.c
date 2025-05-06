#include "thread/exit.h"

#include <arch/syscall.h>

void exit(int status)
{
    syscall1(SYS_exit, (long)status);
}
