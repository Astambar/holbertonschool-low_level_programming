#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	if (size == 0)
		return (-1);

	for (size_t i = 0; array[i] && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
