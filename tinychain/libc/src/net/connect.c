#include "net/connect.h"

#include <arch/syscall.h>
#include <io/puts.h>
#include <thread/exit.h>

int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
    /**
     * Socket calls are different between architectures.
     * - x86_64: Unique syscalls per socket.
     * - i386: One socketcall and a socketcall number.
     */
#ifdef __x86_64__
    return syscall3(SYS_connect, (long)sockfd, (long)addr, (long)addrlen);
#elif defined(__i386__)
    unsigned long args[] = { sockfd, (unsigned long)addr, addrlen };
    return syscall2(SYS_socketcall, SYS_CONNECT, (long)args);
#else
    puts("Unsupported architecture!");
    exit(1);
#endif
}
