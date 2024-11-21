#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: const char
 * @n: const int
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int numbers = 0;
	va_list xlist;

	va_start(xlist, n);

	for (x = 0; x < n; x++)
	{
		numbers = (int) va_arg(xlist, int);
		printf("%d", numbers);

		if (separator != NULL && x != (n - 1))
			printf("%s", separator);
	}
	va_end(xlist);

	printf("\n");
}
