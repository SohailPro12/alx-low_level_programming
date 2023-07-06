#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate the square root recursively
 * @n: The number to calculate the square root of
 * @g: The current guess for the square root
 *
 * Return: The square root if found, -1 otherwise
 */
int sqrt_recursive(int n, int g)
{
	if (g * g == n)
		return (g);

	if (g * g > n)
		return (-1);

		return (sqrt_recursive(n, g + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

		return (sqrt_recursive(n, 0));
}
