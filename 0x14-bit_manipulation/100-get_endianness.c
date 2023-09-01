#include "main.h"

/**
 * get_endianness - the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int c = 1;
	char *endiantype = (char *)&c;

	return (*endiantype);
}
