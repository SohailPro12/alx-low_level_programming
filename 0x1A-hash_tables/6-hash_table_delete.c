#include "hash_tables.h"

/**
 * hash_table_delete - delete ht
 * @ht: hash table
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *ex;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			ex = current;
			current = current->next;
			free(ex->key);
			free(ex->value);
			free(ex);
		}
	}
	free(ht->array);
	free(ht);
}
