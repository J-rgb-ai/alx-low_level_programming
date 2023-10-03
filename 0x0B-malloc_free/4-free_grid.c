#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees memory allocation
 * @grid: pointer to strings
 * @height: number of strings
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
