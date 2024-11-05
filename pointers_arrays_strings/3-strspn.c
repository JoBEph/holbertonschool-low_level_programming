#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	int z = 0;

	for (x = 0; s[x] != '\0' && s[x] != ' '; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
			}
		}
	}
	return (z);
}
