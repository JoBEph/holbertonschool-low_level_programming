#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: pointer
 * Return: always 0
 */

void print_rev(char *s)
{
	int x = 0;
	int y = 10;
	char temp;

	for (; x < y / 2; x++)
	{
		temp = s[x];
		s[x] = s[y - x];
		s[y - x] = temp;
	}
	_putchar('\n');
}

