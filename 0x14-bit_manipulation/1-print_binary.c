#include "main.h"

/**
 * print_binary - number to binary
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int shifting = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;
	unsigned long int bit;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (shifting >= 0)
	{
		bit = n >> shifting;

		if (bit & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
		shifting--;
	}
}
