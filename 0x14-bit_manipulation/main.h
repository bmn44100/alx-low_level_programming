#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define MAX_INDEX ((sizeof(long int) * 8) - 1)

int _putchar(char c);
unsigned int binary_to_uint(const char *b);

#endif
