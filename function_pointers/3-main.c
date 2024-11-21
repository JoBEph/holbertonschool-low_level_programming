#include "3-calc.h"

/**
 *main - mainc
 *@argc: argc
 *@argv: argv
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (op == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0 && (argv[2][0] == 37 || argv[2][0] == 47))
	{
		printf("Error\n");
		exit(100);
	}

		printf("%d\n", op(a, b));

		return (0);
}
