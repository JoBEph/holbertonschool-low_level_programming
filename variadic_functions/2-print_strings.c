#include "variadic_functions.h"

/**
 * print_strings - function print string
 * @separator: pointer char
 * @n: const uns int
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	const char *strings;
	va_list xlist;

	va_start(xlist, n);
	
	for (x = 0; x < n; x++)
	{
		strings = va_arg(xlist, const char *);
		if (strings == NULL)
			printf("(nil)");
		
		else
			printf("%s", strings);

		if (separator != NULL && x != (n - 1))
			printf("%s", separator);
	}
	va_end(xlist);
	printf("\n");
}
