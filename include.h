#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <dirent.h>

void TimeDate();
void Path();
void Sys();
void getFile(const char *filename);
void putFiles(const char *dirname, char *array[]);
void calc(int a, int b, char op);