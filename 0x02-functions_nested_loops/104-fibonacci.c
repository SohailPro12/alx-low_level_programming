#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long int i, b, c, b1, b2, c1, c2;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	b1 = b / 1000000000;
	b2 = b % 1000000000;
	c1 = c / 1000000000;
	c2 = c % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", c1 + (c2 / 1000000000));
		printf("%lu", c2 % 1000000000);
		c1 = c1 + b1;
		b1 = c1 - b1;
		c2 = c2 + b2;
		b2 = c2 - b2;
	}

	printf("\n");

	return (0);
}

