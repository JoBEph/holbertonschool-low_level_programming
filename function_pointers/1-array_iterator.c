#include "function_pointers.h"

/**
 * array_iterator -  that executes a function given as a parameter
 * @size: size array
 * @array: int
 * @action: int
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
