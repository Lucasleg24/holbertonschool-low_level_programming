#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif