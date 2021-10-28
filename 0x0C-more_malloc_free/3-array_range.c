#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - check the code
 *@min: minimum
 *@max: maximum
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *pointer_adresse;
	int i;

	if (min > max)
		return (NULL);
	pointer_adresse = malloc(sizeof(int) * (max - min + 1));
	if (pointer_adresse == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		pointer_adresse[i] = min++;
	return (pointer_adresse);
}
