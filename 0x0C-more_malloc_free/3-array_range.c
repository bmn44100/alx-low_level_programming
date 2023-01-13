#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first value of the array
 * @max: last value of the array
 * Return: pointer to the newly created array if it was
 * succesfuly created, NULL otherwise
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == 0)
		return (NULL);
	for (i = 0; min <= max; min++)
	{
		ar[i] = min;
		i++;
	}
	return (ar);
}
