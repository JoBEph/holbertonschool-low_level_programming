#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return (0);
}
