#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define NOREAD "Error: Can't read from file %s\n"
#define NOWRITE "Error: Can't write to %s\n"
#define NOCLOSE "Error: Can't close fd %d\n"

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
 */
int main(int ac, char **av)
{
	int file_from = 0, file_to = 0;
	ssize_t bytes;
	char buffer[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, NOREAD, av[1]), exit(98);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, NOWRITE, av[2]), exit(99);

	while ((bytes = read(file_from, buffer, READ_BUF_SIZE)) > 0)
		if (write(file_to, buffer, b) != b)
			dprintf(STDERR_FILENO, NOWRITE, av[2]), exit(99);

	if (b == -1)
		dprintf(STDERR_FILENO, NOREAD, av[1]), exit(98);

	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
		dprintf(STDERR_FILENO, NOCLOSE, file_from), exit(100);
	if (file_to)
		dprintf(STDERR_FILENO, NOCLOSE, file_from), exit(100);

	return (EXIT_SUCCESS);
}
