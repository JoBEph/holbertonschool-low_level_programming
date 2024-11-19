#include "function_pointers.h"

/**
 * print_name - print name
 * @name: pointer
 * @f: char pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
