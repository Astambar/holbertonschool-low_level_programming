#include "search_algos.h"

/**
 * linear_search - fonction qui recherche une valeur dans un tableau d'entiers
 * en utilisant l'algorithme de recherche linéaire
 *
 * @array : pointeur vers le premier élément du tableau dans lequel rechercher
 * @size : nombre d'éléments dans le tableau
 * @value : valeur à rechercher
 *
 * Return:
 * premier index où se trouve la valeur
 * -1 sinon
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0)
		return (-1);

	for (; array[i] && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
