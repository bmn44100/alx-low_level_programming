#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;
	hash_node_t *tmp2 = NULL;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			tmp2 = tmp;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = tmp2->next;
		}
		free(tmp);
		i++;
	}
	free(ht->array);
	free(ht);
}
