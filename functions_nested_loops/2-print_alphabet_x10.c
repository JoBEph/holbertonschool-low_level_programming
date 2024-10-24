#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
	}
}
