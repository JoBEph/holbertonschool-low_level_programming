#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: unsint
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	exit(98);
	return (x);
}
