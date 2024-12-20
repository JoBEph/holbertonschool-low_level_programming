#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: int
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
