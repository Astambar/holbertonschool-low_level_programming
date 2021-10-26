#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - prints buffer in hexa
 * @width: largeur
 * @height: string second
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int **array_integer;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	array_integer = (int **) malloc(sizeof(int *) * height);

	if (array_integer == NULL)
	{
		free(array_integer);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array_integer[i] = (int *) malloc(sizeof(int) * width);
		if (array_integer[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(array_integer[i][j]);
			}
			free(array_integer);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_integer[i][j] = 0;
		}
	}
	return (array_integer);
}
