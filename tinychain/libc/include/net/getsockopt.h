#ifndef NET_GETSOCKOPT_H
#define NET_GETSOCKOPT_H

#include <bits/socket.h>

int getsockopt(int sockfd, int level, int optname, void *optval, socklen_t *optlen);

#endif // NET_GETSOCKOPT_H
