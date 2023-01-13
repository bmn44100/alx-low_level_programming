#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: number of the elemnents of the array
 * @size: size of each element of the array in bytes
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar = 0;
	char *ar1;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar1 = malloc(nmemb * size);
	if (ar1 == 0)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		ar1[i] = 0;
	}
	ar = ar1;

	return (ar);
}
