#include "hash_tables.h"

/**
 * hash_table_set - set a key
 * @ht: our hash table
 * @key: the key to set
 * @value: the value to put
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *new_node;

	if (!ht || !key || !value)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = key;
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value;
	if (!new_node->value)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
