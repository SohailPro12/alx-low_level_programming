#include "main.h"

/**
 * _strlen - lentgh of str
 * @c: str
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
 * append_text_to_file - append
 * @filename: file name
 * @text_content: file content
 *
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opf;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	opf = open(filename, O_WRONLY | O_APPEND);
	if (opf == -1)
		return (-1);
	if (len)
		bytes = write(opf, text_content, len);
	close(opf);
	return (bytes == len ? 1 : -1);
}
