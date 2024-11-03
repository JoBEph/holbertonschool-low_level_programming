#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0' && y < n)
	{
		dest[x] = scr[y];

		x++;

		y++;
	}
	dest[x] = '\0';

	return (dest);


}
