#include "main.h"

/**
 * is_number -  find prime number
 * @x: int
 * @n: int
 * Return: Always 0 (Success)
 */
int is_number(int n, int x)
{

	if (n <= 1)
	{
		return (0);
	}
	if (x * x > n)
		return (1);
	{
		if (n % x == 0)
		{
			return (0);
		}
	}
	return (is_number(n, x + 1));
}
/**
* is_prime_number - print number
* @n: int
* Return: Always 0 (Success)
*/

int is_prime_number(int n)
{
return (is_number(n, 2));
}
