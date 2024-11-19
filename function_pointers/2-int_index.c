#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: int
 * @size: int
 * @cmp: int
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
				return (x);
		}
	}
	return (-1);
}
