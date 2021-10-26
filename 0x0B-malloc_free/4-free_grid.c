#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints buffer in hexa
 * @width: largeur
 * @height: string second
 * Return: Nothing.
 */


void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}