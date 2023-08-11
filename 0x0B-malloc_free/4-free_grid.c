#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid created by alloc_grid
 * @grid: address of the two dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
