#include "main.h"

/**
 * _isdigit - check for digit
 *
 *@c: int
 *Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
