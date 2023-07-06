#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: the character to be written
 *
 * Return: On success, return the character written.
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
