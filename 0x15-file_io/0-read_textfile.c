#include "main.h"

/**
 * read_textfile - read and print
 * @filename: file name
 * @letters: bytes number
 *
 * Return: value bytes number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opf;
	ssize_t bytes;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	opf = open(filename, O_RDONLY);
	if (opf == -1)
		return (0);

	bytes = read(opf, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(opf);
	return (bytes);
}
