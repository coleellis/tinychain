#ifndef IO_WRITE_H
#define IO_WRITE_H

#include <sys/types.h>

ssize_t write(int fd, const void *buf, size_t count);

#endif // IO_WRITE_H
