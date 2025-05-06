#ifndef IO_SPLICE_H
#define IO_SPLICE_H

#include <sys/types.h>

ssize_t splice(
    int fd_in, off_t *off_in, int fd_out, off_t *off_out, size_t len, unsigned int flags);

#endif // IO_SPLICE_H
