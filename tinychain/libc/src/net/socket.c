#include "net/socket.h"

#include <arch/syscall.h>

int socket(int domain, int type, int protocol)
{
    /**
     * Socket calls are different between architectures.
     * - i386: One socketcall and a socketcall number.
     * - others: Unique syscalls per socket.
     */
#if defined(__i386__)
    unsigned long args[] = { domain, type, protocol };
    return syscall2(SYS_socketcall, SYS_SOCKET, (long)args);
#else
    return syscall3(SYS_socket, (long)domain, (long)type, (long)protocol);
#endif
}
