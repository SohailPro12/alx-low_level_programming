#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: prints _putchar using putchar protoype
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char table[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(table[i])
	_putchar('\n');

	return (0);
}
