#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		i = 0;
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			while (alpha_upper[i])
			{
				if (*ptr == alpha_upper[i])
				{
					*ptr = rot13_upper[i];
					break;
				}
				i++;
			}
			i = 0;
			while (alpha_lower[i])
			{
				if (*ptr == alpha_lower[i])
				{
					*ptr = rot13_lower[i];
					break;
				}
				i++;
			}
		}
		ptr++;
	}

	return (str);
}
