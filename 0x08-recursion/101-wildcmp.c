#include "main.h"

int check_wildcmp(char *s1, char *s2, char *last);

/**
 * wildcmp - Compares two strings
 * and checks if they can be considered identical
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (check_wildcmp(s1, s2, NULL));
}

/**
 * check_wildcmp - Recursive helper function to check if strings are identical
 * @s1: The first string
 * @s2: The second string
 * @last: Pointer to the last matched character
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int check_wildcmp(char *s1, char *s2, char *last)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (check_wildcmp(s1 + 1, s2 + 1, s1));

	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (check_wildcmp(s1, s2 + 1, last));

		if (*(s2 + 1) != '*')
			return (check_wildcmp(s1 + 1, s2, s1));

		return (check_wildcmp(s1, s2 + 1, last));
	}

	if (last)
		return (check_wildcmp(last + 1, s2, last));

	return (0);
}
