#include "search_algos.h"
#include <math.h>

/**
 * search_array - checks a subarray
 * @array: pointer to array
 * @size: size of array
 * @first: index of first element to print
 * @last: index of last element to print
 * @val: value to match
 * Return: index of match or -1 if no match
 */

int search_array(int *array, size_t size, size_t first, size_t last, int val)
{
	size_t i = 0;

	for (i = first; i <= last && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == val)
			return (i);
	}
	return (-1);
}

/**
 * jump_search - function that searches for a value in a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0;
	size_t i = 0;
	char *return_print = "Value found between indexes ";

	if (array == NULL || size < 1)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] == value)
		{
			printf("%s[%lu] and [%lu]\n", return_print, i - jump, i);
			return (search_array(array, size, i - jump, i, value));
		}
		else if (value < array[i])
		{
			printf("%s[%lu] and [%lu]\n", return_print, i - jump, i);
			return (search_array(array, size, i - jump, i, value));
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	}
	printf("%s[%lu] and [%lu]\n", return_print, i - jump, i);
	return (search_array(array, size, i - jump, i, value));
}
