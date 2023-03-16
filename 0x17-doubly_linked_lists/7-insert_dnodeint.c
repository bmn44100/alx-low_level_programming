#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: linked list
 * @idx: index to insert at
 * @n: value of node to be inserted
 *
 * Return: pointer to new node, or NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *ptr;
	dlistint_t *tmp;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
	{
		if (idx != 0)
		{
			free(new_node);
			return (NULL);
		}
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (*h);
	}

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}

	ptr = *h;

	for (i = 1; i < idx && ptr->next != NULL; i++)
		ptr = ptr->next;

	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}

	tmp = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = tmp;
	if (tmp != NULL)
		tmp->prev = new_node;

	return (new_node);
}
