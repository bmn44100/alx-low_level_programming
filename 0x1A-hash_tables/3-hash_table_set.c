#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: poiner to an address of the hash table needed to update
 * @key: the key
 * @value: value, assosiated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_table = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_table = malloc(sizeof(hash_node_t));
	if (new_table == NULL)
		return (0);
	new_table->key = strdup(key);
	new_table->value = strdup(value);
	new_table->next = NULL;
	if (ht->array[index] != NULL)
		new_table->next = ht->array[index];
	ht->array[index] = new_table;
	return (1);
}
