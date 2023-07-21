#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @arg: The character to print.
 * @separator: The separator to print before the type
 */
void print_char(char *separator, va_list arg)
{
	printf("%s%c", separator, va_arg(arg, int));
}

/**
 * print_int - Prints an integer.
 * @arg: The integer to print.
 * @separator: The separator to print before the type
 */
void print_int(char *separator, va_list arg)
{
	printf("%s%d", separator, va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @arg: The float to print.
 * @separator: The separator to print before the type
 */
void print_float(char *separator, va_list arg)
{
	printf("%s%f", separator, va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: The string to print.
 * @separator: The separator to print before the type
 */
void print_string(char *separator, va_list arg)
{
	char *str = va_arg(arg, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * ...: Variadic arguments of different types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";

	token_t tokens[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
