#include "search_algos.h"

/**
 * print_subarray - prints a subarray
 * @array: pointer to array
 * @first: index of initial element to print
 * @last: index of last element to print
 */

void print_subarray(int *array, size_t first, size_t last)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = first; i < last; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the initial element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t initial = 0;
	size_t final = 0;
	size_t middle = 0;

	if (array == NULL || size == 0)
		return (-1);
	final = size - 1;

	while (initial <= final)
	{
		print_subarray(array, initial, final);
		middle = (initial + final) / 2;
		if (array[middle] > value)
			final = middle - 1;
		else if (array[middle] < value)
			initial = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
