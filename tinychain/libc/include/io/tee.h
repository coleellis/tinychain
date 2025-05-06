#ifndef IO_TEE_H
#define IO_TEE_H

#include <bits/splice.h>
#include <sys/types.h>

ssize_t tee(int fd_in, int fd_out, size_t len, unsigned int flags);

#endif // IO_TEE_H
