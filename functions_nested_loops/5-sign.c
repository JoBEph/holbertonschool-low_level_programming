#include "main.h"

/**
 * print_sign - print sign
 *
 * @n: int n
 *
 * Return: 1 poistive, -1 negative, 0 for 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
