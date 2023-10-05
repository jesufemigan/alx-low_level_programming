#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array
 *
 * @width: width
 * @heigth: height
 *
 * Return: an intialized grid of 0
 */

int **alloc_grid(int width, int heigth)
{
	int **grid, i, j;

	grid = malloc(sizeof(*grid) * heigth);

	if (width <= 0 || heigth <= 0 || grid == 0)
		return (NULL);

	for (i = 0; i < heigth; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);

		if (grid[i] == 0)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
