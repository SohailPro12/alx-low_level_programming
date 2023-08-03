#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 *
 * Return: 0 if big endian, 1 if small
 */
int get_endianness(void)
{
	unsigned long int pro = 1;

	return (*(char *)&pro);
}
