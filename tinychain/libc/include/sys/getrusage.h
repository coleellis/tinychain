#ifndef SYS_GETRUSAGE
#define SYS_GETRUSAGE

#include <bits/resource.h>

int getrusage(int who, struct rusage *usage);

#endif // SYS_GETRUSAGE
