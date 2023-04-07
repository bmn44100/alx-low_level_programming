#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table we are look into
 * @key: key we  are looking for
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
		i++;
	}

	return (NULL);
}
