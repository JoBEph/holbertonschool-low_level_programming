#include "main.h"

/**
 * jack_bauer - use jack_bauer function
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int x, y;

	for (x = 0 ; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(58);
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}

	}
}
