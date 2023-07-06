#include "main.h"

/**
 * square - Helper function to calculate the square root recursively
 * @n: The number to calculate the square root of
 * @val: The current value to check
 *
 * Return: The square root if found, -1 otherwise
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);

	if (val * val > n)
		return (-1);

	return (square(n, val + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
