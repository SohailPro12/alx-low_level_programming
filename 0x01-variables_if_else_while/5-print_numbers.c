#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 1 to 10, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	printf("\n");

	return (0);
}

