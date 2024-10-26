#include "main.h"

/**
 *print_last_digit - print last digit
 *@r: is r
 *
 *Return: value to last digit
 */

int print_last_digit(int r)
{
	int x = r % 10;

	if (x < 0)
		x = -x;

	_putchar(48 + x);

	return (x);
}
