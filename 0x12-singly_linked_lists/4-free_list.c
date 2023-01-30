#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to a linked list head
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
	free(head);
}
