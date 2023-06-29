#include "main.h"
#include <stdio.h>

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
	int i, j, k, l, m, sum, carry;
	char temp;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i > size_r || j > size_r)
		return (0);

	carry = 0;
	k = i - 1;
	l = j - 1;

	for (m = 0; k >= 0 || l >= 0; k--, l--, m++)
	{
		sum = carry;
		if (k >= 0)
			sum += n1[k] - '0';
		if (l >= 0)
			sum += n2[l] - '0';

		carry = sum / 10;
		r[m] = (sum % 10) + '0';
	}

	if (carry > 0)
	{
		if (m >= size_r)
			return (0);
		r[m++] = carry + '0';
	}

	if (m >= size_r)
		return (0);

	r[m] = '\0';
	for (k = 0, l = m - 1; k < l; k++, l--)
	{
		temp = r[k];
		r[k] = r[l];
		r[l] = temp;
	}

	return (r);
}

