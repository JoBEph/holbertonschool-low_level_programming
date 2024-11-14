#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * @n: unsint
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0' && l2 < n)
	{
		l2++;
	}
	str = malloc(sizeof(char) * l1 + l2 + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < l1; x++)
	{
		str[x] = s1[x];
	}
	for (y = 0; y < l2; y++)
	{
		str[l1 + y] = s2[y];
	}
	str[l1 + l2] = '\0';

	return (str);
}
