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
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}

