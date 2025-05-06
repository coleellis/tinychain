#ifndef SYS_KILL_H
#define SYS_KILL_H

#include <bits/signal.h>
#include <sys/types.h>

int kill(pid_t pid, int sig);

#endif // SYS_KILL_H
