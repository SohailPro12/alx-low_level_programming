#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a quote using the write function.
 *             ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: Always 1 (Not success)
 */

int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quot, 59);
	return (1);
}
