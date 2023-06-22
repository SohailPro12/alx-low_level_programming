#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 * @n: The size of the triangle
 *
 */

void print_diagonal (int n)
{
	int postn, space;
	
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				putchar(' ');
			_putchar(92);/*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
