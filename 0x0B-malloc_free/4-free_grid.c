#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the 2 dimensional grid to free
 * @height: the height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
