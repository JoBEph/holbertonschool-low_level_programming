#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional
 *@grid: double pointer
 *@height: int
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
