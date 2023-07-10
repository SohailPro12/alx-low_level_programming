#include "main.h"

int count_words(char *str);
int word_length(char *str);
void free_words(char **words);

/**
 * strtow - splits a string into words
 * @str: the input string
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = word_length(str + i);
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				free_words(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words[j][k] = str[i++];
			words[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;

	return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the input string
 *
 * Return: the number of words
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}

	return (count);
}

/**
 * word_length - computes the length of a word
 * @str: the input string
 *
 * Return: the length of the word
 */
int word_length(char *str)
{
	int length = 0;
	int i = 0;

	while (str[i] != ' ' && str[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * free_words - frees the memory allocated for the words array
 * @words: the array of words
 */
void free_words(char **words)
{
	int i = 0;

	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}

	free(words);
}
