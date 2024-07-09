#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free allocated memory
 * @grid: array
 * @height: size array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0  || grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
