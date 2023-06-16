#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: lowercase exept e and q, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
