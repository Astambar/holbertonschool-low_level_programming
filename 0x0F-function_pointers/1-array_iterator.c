#include "function_pointers.h"
/**
 * print_name - imprime le  nom
 *
 * @name: pointer vers le  nom
 * @f: pointer vers fonction de type void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if(!action || !array)
		return;
	for(i = 0; i < size; i++)
		(*action)(array[i]);
}
