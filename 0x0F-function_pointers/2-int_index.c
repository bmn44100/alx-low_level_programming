#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 *
 * @array: pointer to the array of integers
 * @size: size of the array
 * @cmp: pointer to a function, to be used to cmpare values
 * Return: the index of the first element for which the cmp
 * function does not return 0, -1 otherwise or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
		return (-1);
	}
	return (-1);
}
