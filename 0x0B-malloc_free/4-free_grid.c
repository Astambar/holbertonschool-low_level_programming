#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints buffer in hexa
 * @grid: tableau
 * @height: hauteur tableau
 * Return: Nothing.
 */


void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
