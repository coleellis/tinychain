#include "net/shutdown.h"

#include <arch/syscall.h>

int shutdown(int sockfd, int how)
{
    /**
     * Socket calls are different between architectures.
     * - i386: One socketcall and a socketcall number.
     * - others: Unique syscalls per socket.
     */
#if defined(__i386__)
    unsigned long args[] = { sockfd, how };
    return syscall2(SYS_socketcall, SYS_SHUTDOWN, (long)args);
#else
    return syscall2(SYS_shutdown, (long)sockfd, (long)how);
#endif
}
