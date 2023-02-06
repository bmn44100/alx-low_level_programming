#include "main.h"

/**
 * get_endianness - check endianness of machine
 * Return: 1 if little endian, 0 if big endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ptr = (char *)&x;

	if (*ptr == 1)
		return (1);

	return (0);
}
