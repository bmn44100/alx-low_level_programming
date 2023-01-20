#include "variadic_functions.h"

/**
 * print_int - prints an argument, if its an int
 * @valist: variadic function
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_str - prints an argument, if its an str
 * @valist: variadic function
 */
void print_str(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_char - prints an argument, if its an char
 * @valist: variadic function
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_float - prints an argument, if its an float
 * @valist: variadic function
 */
void  print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_all - prints prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	print_t prt[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	char *sep = "";
	char *sep1 = ", ";
	int i = 0;
	int j = 0;

	va_start(valist, format);
	while (format != NULL && format[j] != '\0')
	{
		while (prt[i].print != NULL)
		{
			if (format[j] == *prt[i].print)
			{
				printf("%s", sep);
				prt[i].f(valist);
				sep = sep1;
			}
			i++;
		}
		i = 0;
		j++;
	}
	printf("\n");
	va_end(valist);
}
