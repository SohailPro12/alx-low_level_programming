#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 * @size: The size of the triangle
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if ((i + j) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
