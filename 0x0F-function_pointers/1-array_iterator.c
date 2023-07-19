#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array
 * @size: The size of the array
 * @action: Pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
