#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int x;

	printf("%d",argc);
	
	for(x = 1; x <argc; x++)
	{
		printf("%s",argv[x]);
	}
	printf("\n");
    	return 0;
}
