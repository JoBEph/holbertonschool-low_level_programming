#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: - pointer
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	x = (x + 1) / 2;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}


