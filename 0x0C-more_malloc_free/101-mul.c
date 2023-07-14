#include "main.h"

/**
 * print_int - Prints an integer
 * @n: The integer to be printed
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= '0' && s[firstNum] <= '9'); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstNum; s[i] >= '0' && s[i] <= '9'; i++)
	{
		resp *= 10;
		resp += (s[i] - '0');
	}
	return (sign * resp);
}

/**
 * _puts - Prints a string
 * @str: The string to be printed
 *
 * Return: Number of characters printed (excluding the null byte)
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
}

/**
 * main - Multiplies two positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
