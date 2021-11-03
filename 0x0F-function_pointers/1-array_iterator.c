#include "function_pointers.h"
/**
 * array_iterator - tableau  ittérrer dans une  fonction
 *
 * @action: pointer vers le  nom
 * @size: la taille  du tableau à ittérer
 * @array:  mon tableau à ittérer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
