#ifndef FS_LSEEK_H
#define FS_LSEEK_H

#include <sys/types.h>

off_t lseek(int fd, off_t offset, int whence);

#endif // FS_LSEEK_H
