#ifndef SYS_SIGACTION_H
#define SYS_SIGACTION_H

#include <bits/signal.h>

int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);

#endif // SYS_SIGACTION_H
