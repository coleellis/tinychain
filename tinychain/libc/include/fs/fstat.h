#ifndef FS_FSTAT_H
#define FS_FSTAT_H

#include <bits/stat.h>

int fstat(int fd, struct stat *statbuf);

#endif // FS_FSTAT_H
