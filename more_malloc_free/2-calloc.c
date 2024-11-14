#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: uint
 * @size: uint
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = (char *) calloc(nmemb, size);

	if (x == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < nmemb * size; y++)
	{
		x[y] = 0;
	}
	return (x);
}
