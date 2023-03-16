#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node at a particular index
 * @head: linked list
 * @index: index of node to be deleted
 *
 * Return: head (which is NULL in the case of failure)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
