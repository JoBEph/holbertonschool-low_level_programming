#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 15; x++)
	if (x <= 9)

	putchar(x + '0');

		else
			putchar(x - 10 + 'a');

	putchar('\n');

	return (0);
}
