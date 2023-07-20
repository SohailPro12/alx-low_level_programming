#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @arg: The character to print.
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an integer.
 * @arg: The integer to print.
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @arg: The float to print.
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string.
 * @arg: The string to print.
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
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

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s", sep);
				print_char(args);
				break;
			case 'i':
				printf("%s", sep);
				print_int(args);
				break;
			case 'f':
				printf("%s", sep);
				print_float(args);
				break;
			case 's':
				printf("%s", sep);
				print_string(args);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
