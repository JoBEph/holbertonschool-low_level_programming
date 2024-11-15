#include "main.h"

/**
 * alloc_grid - returns a pointer to array of integers
 * @width: int
 * @height: int
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int x, y, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (y = 0; y < x; x++)
				free(grid[y]);

			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
