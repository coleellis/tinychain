#include "sys/getrusage.h"

#include <arch/syscall.h>

int getrusage(int who, struct rusage *usage)
{
    return syscall2(SYS_getrusage, (long)who, (long)usage);
}
