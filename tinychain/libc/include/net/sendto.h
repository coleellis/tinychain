#ifndef NET_SENDTO_H
#define NET_SENDTO_H

#include <bits/socket.h>
#include <sys/types.h>

ssize_t sendto(int sockfd, const void *buf, size_t len, int flags, const struct sockaddr *dest_addr,
    socklen_t addrlen);

#endif // NET_SENDTO_H
