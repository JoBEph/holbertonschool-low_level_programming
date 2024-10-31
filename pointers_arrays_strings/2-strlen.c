#include "main.h"

/**
 *_strlen - function that returns the length of a string.
 *
 *@s: pointer lengh
 *
 *Return: Always x (Success)
 */

int _strlen(char *s)
{
	int x;

	{
		x = 0;

		while (s[x] != '\0')
			x++;
	}
	return (x);
}
