#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer, to an adress of a singly linked list h
 * @n: new value of the last node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *tmp;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);
	tmp = *head;
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_tail;
	return (new_tail);
}
