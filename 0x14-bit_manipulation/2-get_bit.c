#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in the binary
 * representation of a number
 * @n: number to be evaluated
 * @index: index of bit
 * Return: 1 or 0 depending on value of bit, or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count = 1;

	if (index > MAX_INDEX)
		return (-1);

	count = count << index;

	if ((count & n) > 0)
		return (1);
	else
		return (0);
}
