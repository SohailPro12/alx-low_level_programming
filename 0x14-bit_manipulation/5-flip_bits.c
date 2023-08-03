#include "main.h"

/**
 * flip_bits - return number of bits that would need to be flipped to
 * transform one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorvalue = n ^ m;
	unsigned int count = 0;

	while (xorvalue)
	{
		if (xorvalue & 1ul)
			count++;
		xorvalue = xorvalue >> 1;
	}
	return (count);
}
