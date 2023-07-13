#include "main.h"

void print_int(int n);
int _atoi(const char *s);
int _puts(const char *str);

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
	unsigned long int num1, num2, result;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	print_int(result);
	_putchar("\n");

	return (0);
}

/**
 * print_int - Prints an integer
 * @n: The integer to be printed
 */
void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_int(n / 10);

	_putchar((n % 10) + '0');
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
	int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');
		else if (result != 0)
			break;
		s++;
	}

	return (result * sign);
}

/**
 * _puts - Prints a string
 * @str: The string to be printed
 *
 * Return: Number of characters printed (excluding the null byte)
 */
void _puts(const char *str)
{
	int count = 0;

	while (*str[count])
	{
		_putchar(*str[count]);
		count++;
	}
}
