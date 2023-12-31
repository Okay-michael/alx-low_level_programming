#include "main.h"

/**
 * free_matrix - this function frees a grid
 * @grid: this is the grid to be freed
 * @height: this is the height of the grid
 */
void free_matrix(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}

	if (grid != NULL)
	{
		free(grid);
	}
}

/**
 * alloc_grid - returns a pointer to a grid
 * @width: this is the with of the grid
 * @height: this is the height of the grid
 * Return: a pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int **pter = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	pter = malloc(sizeof(int *) * height);
	if (pter == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pter[i] = malloc(sizeof(int) * width);
		if (pter[i] == NULL)
		{
			free_matrix(pter, height);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			pter[i][j] = 0;
		}
	}

	return (pter);
}
