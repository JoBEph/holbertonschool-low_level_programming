#include "main.h"

/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: pointer
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *x;
	int y;

	if (str == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y] != '\0'; y++)

		x = malloc((y + 1) * sizeof(char));

	if (x == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y] != '\0'; y++)
	{
		x[y] = str[y];
	}
	x[y] = '\0';
	
	return (x);
}
