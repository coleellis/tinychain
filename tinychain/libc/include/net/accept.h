#ifndef NET_ACCEPT_H
#define NET_ACCEPT_H

#include <bits/socket.h>

int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);

#endif // NET_ACCEPT_H
