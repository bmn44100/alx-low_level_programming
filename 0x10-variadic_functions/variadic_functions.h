#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - struct print
 * @print: The operator
 * @f: The function associated
 */

typedef struct print
{
	char *print;
	void (*f)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*_VARIADIC_H_*/
