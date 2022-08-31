#include "search_algos.h"

/**
 * binary_search - fonction qui recherche une valeur
 * dans un tableau trié d'entiers à l'aide de l'algorithme de recherche binaire
 *
 * @array : pointeur vers le premier élément du tableau dans lequel rechercher
 * @size : nombre d'éléments dans le tableau
 * @value : valeur à rechercher
 *
 * Return:
 * premier index où se trouve la valeur
 * -1 sinon
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (size == 0)
		return (-1);

	while (right >= left)
	{
		mid = left + (right - left) / 2;

		/* print the array */
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
