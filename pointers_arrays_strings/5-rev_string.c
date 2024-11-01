#include "main.h"

/**
 * rev_string -  function that reverses a string.
 * @s: int
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int x = 0;
	int y;
	char temp;

	while (s[x] != '\0')
		x++;
	for (y = 0; y < x / 2; y++)
	{

		temp = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = temp;
	}
}

