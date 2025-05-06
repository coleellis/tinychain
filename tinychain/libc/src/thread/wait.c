#include "thread/wait.h"

#include <thread/waitpid.h>

pid_t wait(int *wstatus)
{
    return waitpid(-1, wstatus, 0);
}
