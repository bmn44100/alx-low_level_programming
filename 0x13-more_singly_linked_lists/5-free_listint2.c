#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer, to an adress, of a singly linked list head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp1;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
	*head = NULL;
}
