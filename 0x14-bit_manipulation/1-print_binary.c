#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, printed = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
