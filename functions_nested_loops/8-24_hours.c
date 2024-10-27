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
			printf("%02d:%02d\n", x, y);
		}
	}
}
