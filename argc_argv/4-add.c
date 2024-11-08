#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *@argc: int
 *@argv: int
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int somme = 0;
	int x, y;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0 ; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		somme += atoi(argv[x]);
	}
	printf("%d\n", somme);
	return (0);
}
