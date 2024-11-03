#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * a: pointer
 * n: int
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int x = 0;
	for(; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	putchar('\n');

}
