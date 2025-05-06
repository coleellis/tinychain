#ifndef NET_BIND_H
#define NET_BIND_H

#include <bits/socket.h>

int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);

#endif // NET_BIND_H
