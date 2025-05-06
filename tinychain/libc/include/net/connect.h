#ifndef NET_CONNECT_H
#define NET_CONNECT_H

#include <bits/socket.h>

int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen);

#endif // NET_CONNECT_H
