#include "main.h"

/**
 * power - first function to find natural square root
 * @x: int power
 * @n: int
 * Return: Always 0 (Success)
 */

int  power(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (power(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
		return (power(n, 0));
}
