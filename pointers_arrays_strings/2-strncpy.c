#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
