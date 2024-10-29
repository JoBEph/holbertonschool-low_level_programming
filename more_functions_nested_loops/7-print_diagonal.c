#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 *
 * @n: int
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for ( x = 0; x < n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				if (y == x)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
