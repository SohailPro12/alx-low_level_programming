#include "main.h"

/**
 * clear_bit - set to 0
 * @n: the binary number
 * @index: The index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
