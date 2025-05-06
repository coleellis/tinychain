#ifndef IO_OPEN_H
#define IO_OPEN_H

#include <bits/fcntl.h>
#include <bits/unistd.h>

int open(const char *pathname, int flags, unsigned int mode);

#endif // IO_OPEN_H
