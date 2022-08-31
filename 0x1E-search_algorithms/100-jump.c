#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * jump_search - fonction qui recherche une valeur
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
int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0;
	size_t i = 0;

	if (!array)
		return (-1);

	while (jump < size && array[jump] < value)
	{
		i = jump;
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		jump += sqrt(size);
	}

	if (array[i] <= value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
		for (; i < size && i <= jump; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
