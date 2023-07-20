#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @arg: The character to print.
 * @sep: The separator string.
 */
void print_char(va_list arg, char *sep)
{
	printf("%s%c", sep, va_arg(arg, int));
}

/**
 * print_int - Prints an integer.
 * @arg: The integer to print.
 * @sep: The separator string.
 */
void print_int(va_list arg, char *sep)
{
	printf("%s%d", sep, va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @arg: The float to print.
 * @sep: The separator string.
 */
void print_float(va_list arg, char *sep)
{
	printf("%s%f", sep, va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: The string to print.
 * @sep: The separator string.
 */
void print_string(va_list arg, char *sep)
{
	char *str = va_arg(arg, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * ...: Variadic arguments of different types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
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
		unsigned int j = 0;

		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
