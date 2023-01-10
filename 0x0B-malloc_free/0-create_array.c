#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: specific char to initialize an array
 *
 * Return: NULL if size of array is 0, pointer,
 * to a first element of the array otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ar = (char *)malloc(size * sizeof(char));

	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
