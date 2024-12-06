#include "main.h"

/**
 *read_textfile - function that reads a text file and prints
 *@filename: const char
 *@letters: size
 *Return: Always 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int Op;
	ssize_t Rd, Wr;
	char *size;

	if (filename == NULL)
	{
		return (0);
	}
	Op = open(filename, O_RDONLY);
	if (Op == -1)
	{
		return (0);
	}
	size = malloc(sizeof(char) * letters);
	if (size == NULL)
	{
		close(Op);
		return (0);
	}
	Rd = read(Op, size, letters);
	if (Rd == -1)
	{
		free(size);
		close(Op);
		return (0);
	}
	Wr = write(STDOUT_FILENO, size, Rd);
	if (Wr == -1 || Wr != Rd)
	{
		free(size);
		close(Op);
		return (0);
	}
	free(size);
	close(Op);
	return (Wr);
}
