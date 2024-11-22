#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: char
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	va_list xlist;
	unsigned int x = 0;
	char *separator = "";
	char *str;

	va_start(xlist, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", separator, va_arg(xlist, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(xlist, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(xlist, double));
				break;
			case 's':
				str = va_arg(xlist, char*);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				x++;
				continue;
		}
		separator = ", ";
		x++;
	}
	printf("\n");
	va_end(xlist);
}

