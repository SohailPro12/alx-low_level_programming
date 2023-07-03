#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the first occurrence of a byte in @s that matches one of
 *         the bytes in @accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *match;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match = &s[i];
				return (match);
			}
			j++;
		}
		i++;
	}

	return (0);
}
