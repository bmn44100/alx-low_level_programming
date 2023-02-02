#include "lists.h"

/**
 * print_listint_safe - prints a list without going through an infinite loop
 * @head: beginning of linked list
 * Return: size of list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t elmnts = 0;
	listint_t *ptr_array[200];
	listint_t *iter = (listint_t *)head;
	int i;

	while (iter != NULL)
	{
		for (i = 0; i < (int)elmnts; i++)
		{
			if (iter == ptr_array[i])
			{
				printf("-> %d\n", iter->n);
				return (elmnts);
			}
		}
		printf("[%p] %d\n", (void *)iter, iter->n);
		ptr_array[i] = iter;
		iter = iter->next;
		elmnts++;
	}

	return (elmnts);
}
