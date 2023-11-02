#include "hash_tables.h"

/**
 * key_index - return the index of a key
 * @key: pointer to a char
 * @size: the size of the array
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2((unsigned char *)key) % size;
	return (index);
}
