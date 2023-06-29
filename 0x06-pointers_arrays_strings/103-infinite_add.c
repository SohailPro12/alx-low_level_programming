#include "main.h"
#include <stdio.h>

/**
 * reverse_string - Reverses a string.
 * @str: The string to reverse.
 */
void reverse_string(char *str)
{
	int i, j;
	char temp;

	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: Pointer to the result (r) or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, sum, carry;

	i = strlen(n1) - 1;
	j = strlen(n2) - 1;
	carry = 0;
	k = 0;

	while (i >= 0 || j >= 0 || carry != 0)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j--;
		k++;

		if (k >= size_r)
			return (0);
	}

	r[k] = '\0';
	reverse_string(r);

	return (r);
}
