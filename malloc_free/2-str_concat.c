#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, l1 = 0, l2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != 0)
	{
		l1++;
	}
	while (s2[l2] != 0)
	{
		l2++;
	}
	str = malloc(sizeof(char) * l1 + l2 + 1);
	if (str == NULL)
	{
		return ('\0');
	}
	for (x = 0; x < l1; x++)
	{
		str[x] = s1[x];
	}
	for (y = 0; y < l2; y++)
	{
		str[l1 + y] = s2[y];
		str[l1 + l2] = '\0';
	}

	return (str);
}
