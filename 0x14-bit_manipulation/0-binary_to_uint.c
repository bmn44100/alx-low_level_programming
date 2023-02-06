#include "main.h"

/**
 * binary_to_uint - converts a binary number (in string form) to an int
 * @b: binary number
 * Return: the converted number, or 0 if there's an error
 */

unsigned int binary_to_uint(const char *b)
{
	const char *ptr = b;
	unsigned int sum = 0;
	unsigned int mult = 1;

	if (b == NULL)
		return (0);

	while (*ptr != '\0')
		ptr++;

	ptr--;

	while (ptr >= b)
	{
		if (*ptr == '1')
			sum += mult;
		else if (*ptr != '0')
			return (0);

		mult *= 2;

		if (ptr > b)
			ptr--;
		else
			break;
	}
	return (sum);
}
