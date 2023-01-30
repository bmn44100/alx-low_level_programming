#include "lists.h"

/**
 * _strlen - returns the length of a string str
 * @str: pointer to a first element of the string str
 * Return: length of the string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to the address of the array
 * @str: pointer to a string str
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *tmp;

	new_tail = malloc(sizeof(list_t));
	if (new_tail == NULL)
		return (NULL);
	tmp = *head;
	new_tail->str = strdup(str);
	if (new_tail->str == NULL)
	{
		free(new_tail);
		return (NULL);
	}

	new_tail->len = _strlen(new_tail->str);
	if (*head == NULL)
	{
		*head = new_tail;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_tail;
	new_tail->next = NULL;
	return (new_tail);
}
