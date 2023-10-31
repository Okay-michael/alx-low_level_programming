#include "main.h"

/**
 * free_grid - this function frees a grid
 * @grid: this is the grid to be freed
 * @height: this is the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}

