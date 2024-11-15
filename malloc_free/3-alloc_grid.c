#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int x, y, z;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (z = 0; z < x; x++)
		{
				free(grid[z]);
		}
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
