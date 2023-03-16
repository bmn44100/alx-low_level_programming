#include "lists.h"

/**
 * dlistint_len - finds length of linked list
 * @h: linked list
 *
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
