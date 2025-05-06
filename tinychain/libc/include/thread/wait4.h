#ifndef THREAD_WAIT4_H
#define THREAD_WAIT4_H

#include <bits/resource.h>
#include <sys/types.h>

pid_t wait4(pid_t pid, int *wstatus, int options, struct rusage *rusage);

#endif // THREAD_WAIT4_H
