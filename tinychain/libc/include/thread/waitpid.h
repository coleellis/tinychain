#ifndef THREAD_WAITPID_H
#define THREAD_WAITPID_H

#include <sys/types.h>

pid_t waitpid(pid_t pid, int *wstatus, int options);

#endif // THREAD_WAITPID_H
