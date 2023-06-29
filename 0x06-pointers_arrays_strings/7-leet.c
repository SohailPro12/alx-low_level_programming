#include "main.h"

/**
 * leet - Encodes a string into 1337 format.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i;

	while (*ptr)
	{
		i = 0;
		while (leet_chars[i])
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}
