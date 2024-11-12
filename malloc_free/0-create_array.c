#include "main.h"

/**
 * create_array - array of chars, and initializes it with a specific char
 *@c: char
 *@size: unsint
 *Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
	{
		return ('\0');
	}
	y = malloc(sizeof(char) * size);

	if (y == 0)
	{
		return ('\0');
	}
	for (x = 0; x < size; x++)
	{

		y[x] = c;
	}

	return (y);
}
