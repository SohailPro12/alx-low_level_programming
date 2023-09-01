#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (shift >= 0)
	{
		unsigned long int bit = n >> shift;

		if (bit & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
		shift--;
	}
}
