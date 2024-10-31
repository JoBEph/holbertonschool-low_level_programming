#include "main.h"

/**
 *int _strlen(char *s)
 *
 *@*s: pointer s
 *
 *Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int x;

	{
		x = 0;

		while(s[x]!='\0')
			x++;
	}
	return (x);
}
