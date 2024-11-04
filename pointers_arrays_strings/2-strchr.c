#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == 0)
	{
		return (s);
	}
		return (0);
}


