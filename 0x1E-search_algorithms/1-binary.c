#include "search_algos.h"


/**
 * binary_search - the binary search algorithm
 * implementation
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: -1 or 1
 */


int binary_search(int *array, size_t size, int value)
{
	size_t left, right = size - 1;
    size_t i;

	if (array == NULL)
		return (-1);

	while(left <= right)
	{
        int mid = (left + right) / 2;

        printf("Searching in array: ");
		for (i = left-1; i < right; i++)
			printf("%d, ", array[i]);
        printf("%d\n", array[i]);
        if (array[mid] == value){
            return mid;
            printf("Found %d at index: %d", array[mid], mid);
        }

        if (array[mid] < value)
        {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
	}
	return (-1);
}
