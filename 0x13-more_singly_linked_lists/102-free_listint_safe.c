#include "lists.h"

/**
 * free_listint_safe - frees a list that may be in a loop
 * @h: pointer to pointer to beginning of list
 * Return: size of list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t elmnts = 0;
	listint_t *temp = NULL;
	listint_t *ptr_array[200];
	int i;

	if (h == NULL)
		return (0);

	while (*h != NULL)
	{
		for (i = 0; i < (int)elmnts; i++)
		{
			if (*h == ptr_array[i])
			{
				*h = NULL;
				h = NULL;
				return (elmnts);
			}
		}
		ptr_array[i] = *h;
		temp = (*h)->next;
		free(*h);
		*h = temp;
		elmnts++;
	}

	*h = NULL;
	h = NULL;

	return (elmnts);
}
