#ifndef NET_GETSOCKNAME_H
#define NET_GETSOCKNAME_H

#include <bits/socket.h>

int getsockname(int sockfd, struct sockaddr *addr, socklen_t *addrlen);

#endif // NET_GETSOCKNAME_H
