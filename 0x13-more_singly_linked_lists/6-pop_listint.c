#include "lists.h"

/**
 * pop_listint - prints all the elements of a listint_t list.
 * @head: pointer, to a singly linked list h
 * Return: number of nodes
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n1;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	n1 = tmp->n;
	free(tmp);
	return (n1);
}
