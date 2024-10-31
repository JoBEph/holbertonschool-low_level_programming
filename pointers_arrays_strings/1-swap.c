#include "main.h"

/**
 * swap_int - swap a and b value
 *@a: value
 *@b: value
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
