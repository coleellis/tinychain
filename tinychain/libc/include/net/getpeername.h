#ifndef NET_GETPEERNAME_H
#define NET_GETPEERNAME_H

#include <bits/socket.h>

int getpeername(int sockfd, struct sockaddr *addr, socklen_t *addrlen);

#endif // NET_GETPEERNAME_H
