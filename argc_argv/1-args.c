#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: - int
 * @argv: - pointer
 * Return: Always 0 ( Success)
 */
int main(int argc, char *argv[])
{
	int x;

	printf("%d", argc);

	for (x = 1; x < argc; x++)
	{
		printf("%d%s", x, argv[x]);
	}

	printf("\n");

	return (0);
}
