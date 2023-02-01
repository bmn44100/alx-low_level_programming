#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: pointer, to an adress, of a singly linked list
 * Return: pointer to a first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t  *previous, *following;

	previous = NULL;
	while (*head != NULL)
	{
		following = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = following;
	}
	*head = previous;
	return (*head);
}
