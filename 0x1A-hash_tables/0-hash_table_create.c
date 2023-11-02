#include "hash_tables.h"

/**
 * hash_table_create - create the hash table
 * @size: the size fo the table
 * Return: new has table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int i;

	new_table = calloc(1, sizeof(hash_table_t));
	if (!new_table)
		return (0);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (!new_table->array)
	{
		free(new_table->array);
		return (NULL);
	}
	return (new_table);
}
