#include "main.h"

/**
 * array_range - function that creates an array of integers
 *@min: int
 *@max: int
 *Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int *str;
	int x, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

		str = malloc(sizeof(int) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		str[x] = min + 1;
	}
	return (str);
}
