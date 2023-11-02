#include "hash_tables.h"

/**
 * hash_table_print - print ht
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *current;
	int f = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			f = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
