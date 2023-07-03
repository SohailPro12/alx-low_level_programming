#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the beginning of the located substring in @haystack, or
 *         NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;

		if (needle[j] == '\0')
			return (haystack + i);

		i++;
		j = 0;
	}

	return (NULL);
}
