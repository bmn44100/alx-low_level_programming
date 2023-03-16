#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: linked list
 * @index: index of node to be deleted
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;
	dlistint_t *Next;
	dlistint_t *Prev;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		Next = ptr->next;
		if (Next != NULL)
			Next->prev = NULL;
		free(ptr);
		*head = Next;
		return (1);
	}
	for (i = 0; i < index && ptr->next != NULL; i++)
		ptr = ptr->next;
	if (i < index)
		return (-1);
	Next = ptr->next;
	Prev = ptr->prev;
	if (Next != NULL)
		Next->prev = Prev;
	Prev->next = Next;
	free(ptr);

	return (1);
}
