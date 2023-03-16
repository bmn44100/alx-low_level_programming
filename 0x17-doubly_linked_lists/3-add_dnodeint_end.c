#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: linked list
 * @n: value of node to be added
 *
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_node;
	new_node->prev = ptr;

	return (new_node);
}
