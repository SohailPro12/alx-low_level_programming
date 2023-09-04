#include "main.h"

/**
 * _strlen - lengh
 * @c: string
 *
 * Return: int value
 */
int _strlen(char *c)
{
	int i = 0;

	if (!c)
		return (0);

	while (*c++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int opf;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	opf = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (opf == -1)
		return (-1);

	if (len)
		bytes = write(opf, text_content, len);
	close(opf);
	return (bytes == len ? 1 : -1);
}
