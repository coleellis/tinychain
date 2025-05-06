#ifndef NET_SETSOCKOPT_H
#define NET_SETSOCKOPT_H

#include <bits/socket.h>

int getsockopt(int sockfd, int level, int optname, const void *optval, socklen_t *optlen);

#endif // NET_SETSOCKOPT_H
