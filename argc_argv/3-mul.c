#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *@nombre1: int
 *@nombre2: int
 *@somme: int
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int nombre1, nombre2, somme;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	 nombre1 = atoi(argv[1]);
	 nombre2 = atoi(argv[2]);
	 somme = nombre1 * nombre2;

	printf("%d\n", somme);

	return (0);
}
