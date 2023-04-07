#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, last_i;
	hash_node_t *tmp = NULL;
	hash_node_t *last = NULL;

	if (ht == NULL)
		return;
	for (last_i = (ht->size) - 1; last_i != 0; last_i--)
	{
		last = ht->array[last_i];
		if (last != NULL)
			break;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp != last)
				printf(", ");
			tmp = tmp->next;
		}
	}
	printf("}");
	printf("\n");
}
