#include "lists.h"

/**
 * sum_dlistint - returns sum of values stored int linked list
 * @head: linked list
 *
 * Return: sum, or 0 if none
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
