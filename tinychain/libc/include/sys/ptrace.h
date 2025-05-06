#ifndef SYS_PTRACE_H
#define SYS_PTRACE_H

#include <bits/ptrace.h>
#include <sys/types.h>

long ptrace(size_t request, pid_t pid, void *addr, void *data);

#endif // SYS_PTRACE_H
