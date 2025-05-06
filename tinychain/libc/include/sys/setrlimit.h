#ifndef SYS_SETRLIMIT_H
#define SYS_SETRLIMIT_H

#include <bits/resource.h>

int setrlimit(int resource, const struct rlimit *rlim);

#endif // SYS_SETRLIMIT_H
