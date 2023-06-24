#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, next;

	for (i = 0; i < 50; i++)
	{
		next = num1 + num2;
		printf(", %lu", next);

		num1 = num2;
		num2 = next;

		if (i == 49)
			printf('\n');
		else
			printf(", ");
	}

	return (0);
}

