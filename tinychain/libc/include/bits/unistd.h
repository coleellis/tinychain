#pragma once

#define NULL 0

/* file descriptors */
#define STDIN_FILENO  0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

/* whence values for lseek() */
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

// Max paths
#ifndef PATH_MAX
#define PATH_MAX 4096
#endif

#ifndef MAXPATHLEN
#define MAXPATHLEN (PATH_MAX)
#endif

/* standard exit() codes */
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
