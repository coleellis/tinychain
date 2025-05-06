#ifndef IO_VMSPLICE_H
#define IO_VMSPLICE_H

#include <sys/types.h>

ssize_t vmsplice(int fd, const struct iovec *iov, size_t nr_segs, unsigned int flags);

#endif // IO_VMSPLICE_H
