#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number to be evaluated
 * @m: number to be evaluated
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_m_xor = n ^ m;
	unsigned long int count = 1;
	unsigned long int c_c_and;
	unsigned int sum = 0;
	const unsigned long int max = count << MAX_INDEX;

	while (count <= n_m_xor)
	{
		c_c_and = n_m_xor & count;
		if (c_c_and > 0)
			sum++;

		if (count < max)
			count = count << 1;
		else
			break;
	}

	return (sum);
}
