#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
