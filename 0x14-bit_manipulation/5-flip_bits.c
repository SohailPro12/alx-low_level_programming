#include "main.h"

/**
 * flip_bits - number of flip bits
 * @n: The first binary
 * @m: The second binary
 * Return: The number of flip bite
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int c = 0;

	while (result > 0)
	{
		c += result & 1;
		result >>= 1;
	}

	return (c);
}
