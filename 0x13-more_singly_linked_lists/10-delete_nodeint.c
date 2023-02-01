#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer, to an address, of to a singly linked list h
 * @index: index of the node, that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *previous;
	unsigned int i = 0;

	tmp = *head;
	if (tmp != NULL && index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (i == (index - 1))
		{
			previous = tmp;
			tmp = tmp->next;
			previous->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	free(tmp);
	return (-1);
}
