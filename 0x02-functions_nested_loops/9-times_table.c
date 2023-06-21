#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');
			result = row * column;
			if (result <= 9)
				_putchar((' ');
			else
				_putchar((result % 10) + 48);

			_putchar((result % 100 + 48);
		}
		_putchar('\n');
	}
}

