#include "function_pointers.h"
/**
 * array_iterator - itterre sur un tableau dans une fonction
 *
 * @array: mon tableau
 * @size: ma taille
 * @action: ma fonction
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
if (!size || !array || !action)
	return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
