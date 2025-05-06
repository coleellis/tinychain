#include "sys/sysinfo.h"

#include <arch/syscall.h>

int sysinfo(struct sysinfo *info)
{
    return syscall1(SYS_sysinfo, (long)info);
}
