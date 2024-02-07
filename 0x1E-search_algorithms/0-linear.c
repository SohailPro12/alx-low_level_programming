#include "search_algos.h"


/**
 * linear_search - the Linear search algorithm
 * implementation
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: -1 or 1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
			printf("Found %d at index: %lu", array[i], i);
		}
	}
	return (-1);
}
