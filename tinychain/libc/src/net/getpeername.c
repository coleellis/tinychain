#include "net/getpeername.h"

#include <arch/syscall.h>
#include <io/puts.h>
#include <thread/exit.h>

int getpeername(int sockfd, struct sockaddr *addr, socklen_t *addrlen)
{
    /**
     * Socket calls are different between architectures.
     * - x86_64: Unique syscalls per socket.
     * - i386: One socketcall and a socketcall number.
     */
#ifdef __x86_64__
    return syscall3(SYS_getpeername, (long)sockfd, (long)addr, (long)addrlen);
#elif defined(__i386__)
    unsigned long args[] = { sockfd, (unsigned long)addr, (unsigned long)addrlen };
    return syscall2(SYS_socketcall, SYS_GETPEERNAME, (long)args);
#else
    puts("Unsupported architecture!");
    exit(1);
#endif
}
