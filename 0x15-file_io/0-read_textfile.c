#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int F;
	ssize_t bytestobep;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	F = open(filename, O_RDONLY);
	if (F == -1)
		return (0);
	bytestobep = read(F, &buf[0], letters);
	bytestobep = write(STDOUT_FILENO, &buf[0], bytes);
	close(F);

	return (bytes);
}

