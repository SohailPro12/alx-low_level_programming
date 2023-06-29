#include "main.h"

/**
 *cap_string - Capitalizes all words of a string.
 *@str: The string to modify.
 *
 *Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	int capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}							    }
	return (str);
}
