#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional array of ints
 * @height: grid height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
