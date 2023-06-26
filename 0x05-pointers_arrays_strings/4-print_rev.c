#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
