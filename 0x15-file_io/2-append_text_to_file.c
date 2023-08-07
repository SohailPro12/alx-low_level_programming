#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int F;
	ssize_t bytestobep = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	F = open(filename, O_WRONLY | O_APPEND);
	if (F == -1)
		return (-1);
	if (len)
		bytestobep = write(F, text_content, len);
	close(F);
	return (bytestobep == len ? 1 : -1);
}
