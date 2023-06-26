#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string
 */

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int i;

	while (s[length_of_the_string])
		length_of_the_string++;

	for (i = (length_of_the_string - 1) / 2; i != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
