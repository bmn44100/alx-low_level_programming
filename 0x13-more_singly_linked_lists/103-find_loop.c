#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = NULL;
	listint_t *fast = NULL;

	if (head == NULL)
		return (NULL);

	if (head->next != NULL)
		slow = head->next;
	if (slow != NULL)
		fast = slow->next;

	if (slow == fast || fast->next == slow)
		return (head);

	while (fast != NULL)
	{
		if (slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow == fast)
	{
		while (head != slow)
		{
			fast = slow->next;
			while (fast != slow)
			{
				if (fast == head)
					return (head);
				fast = fast->next;
			}
			if (fast == head)
				return (head);
			head = head->next;
		}
	}

	return (NULL);
}
