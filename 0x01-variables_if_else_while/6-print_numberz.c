#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: numbers using char, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}

