#include "hash_tables.h"
/**
 * hash_table_get - get
 * @ht: our hash table
 * @key: key to get
 * Return: the value or 0
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *current;

	if (!ht || !key)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
