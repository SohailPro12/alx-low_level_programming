#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime recursively
 * @n: The number to check
 * @div: The divisor to check divisibility
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (n < 2)
		return (0);

	if (n % div == 0)
		return (0);

	if (div * div > n)
		return (1);

	return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
