#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, total_len = 0;
	char *str, *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			total_len++;
			len++;
		}
		total_len++; /* Account for space character */
	}

	str = malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
		return (NULL);

	concat_str = str;

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			*str = av[i][len];
			str++;
			len++;
		}
		*str = ' '; /* Add space character between arguments */
		str++;
	}

	*str = '\0'; /* Add null terminator at the end */
	return (concat_str);
}
