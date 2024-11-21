#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: const unsi int
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list xlist;

	if (n == 0)
	{
		return (0);
	}
	va_start(xlist, n);
	for (x = 0; x < n; x++)
		sum += (int) va_arg(xlist, int);
	va_end(xlist);
	return (sum);
}
