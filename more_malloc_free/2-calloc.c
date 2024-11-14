#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: uint
 * @size: uint
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = malloc(nmemb * size);

	if (x == NULL)
	{
		return (NULL);
		free(x);
	}
	return (x);
}
