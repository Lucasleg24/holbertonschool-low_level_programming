#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/type.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
