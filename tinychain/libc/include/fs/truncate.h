#ifndef FS_TRUNCATE_H
#define FS_TRUNCATE_H

#include <sys/types.h>

int truncate(const char *path, off_t length);

#endif // FS_TRUNCATE_H
