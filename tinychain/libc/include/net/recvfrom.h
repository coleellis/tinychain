#ifndef NET_RECVFROM_H
#define NET_RECVFROM_H

#include <bits/socket.h>
#include <sys/types.h>

ssize_t recvfrom(
    int sockfd, void *buf, size_t len, int flags, struct sockaddr *src_addr, socklen_t *addrlen);

#endif // NET_RECVFROM_H
