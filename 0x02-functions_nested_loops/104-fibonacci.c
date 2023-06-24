#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
	int count, num1 = 1, num2 = 2, next;

	printf("%d, %d, ", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		next = num1 + num2;
		printf("%d", next);

		if (count < 98)
			printf(", ");

		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
