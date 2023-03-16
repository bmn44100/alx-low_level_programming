#include "lists.h"

/**
 * print_dlistint - prints the values of a linked list
 * @h: linked list
 * Return: length of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
