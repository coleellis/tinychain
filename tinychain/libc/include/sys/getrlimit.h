#ifndef SYS_GETRLIMIT_H
#define SYS_GETRLIMIT_H

#include <bits/resource.h>

int getrlimit(int resource, struct rlimit *rlim);

#endif // SYS_GETRLIMIT_H
