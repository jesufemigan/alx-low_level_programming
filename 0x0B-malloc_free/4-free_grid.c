#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees created grid
 *
 * @grid: the grid
 * @height: height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
