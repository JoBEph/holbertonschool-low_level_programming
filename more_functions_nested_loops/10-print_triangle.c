#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @Size - int
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{	
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = 0; y < size - x; y++)
		{
			_putchar(' ');
		}
		for (z = 0; z < x; z++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
