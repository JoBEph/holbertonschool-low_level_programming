#include "main.h"

/**
 * is_prime_number -  prime number
 * @n: int
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	int x;

	if (n <= 1)
	{
		return (0);
	}
	for (x = 2; x * x <= n; x++)
	{
		if (n % x == 0)
		{
			return (0);
		}
	}
	return (1);
}

