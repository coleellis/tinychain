#ifndef SYS_SIGPROCMASK_H
#define SYS_SIGPROCMASK_H

#include <bits/signal.h>

int sigprocmask(int how, const sigset_t *set, sigset_t *oldset);

#endif // SYS_SIGPROCMASK_H
