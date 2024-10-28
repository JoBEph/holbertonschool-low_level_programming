#include "main.h"

/**
 * print_most_numbers - print number 0 to 9 , except 2 and 4
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50 && x != 52)
			putchar(x);
	}
	_putchar('\n');
}
