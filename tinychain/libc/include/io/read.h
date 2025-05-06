#ifndef IO_READ_H
#define IO_READ_H

#include <sys/types.h>

ssize_t read(int fd, void *buf, size_t count);

#endif // IO_READ_H
