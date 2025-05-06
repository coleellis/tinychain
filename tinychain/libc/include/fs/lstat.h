#ifndef FS_LSTAT_H
#define FS_LSTAT_H

#include <bits/stat.h>

int lstat(const char *pathname, struct stat *statbuf);

#endif // FS_LSTAT_H
