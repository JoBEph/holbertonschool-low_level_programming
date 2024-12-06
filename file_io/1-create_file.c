#include "main.h"
/**
 *create_file - function that creates a file
 *@filename: const char
 *@text_content: char
 *Return: Always 0
 */

int create_file(const char *filename, char *text_content)
{
	int Op;
	ssize_t Wr;
	size_t size = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	Op = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (Op == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
		{
			size++;
		}
		Wr = write(Op, text_content, size);
		if (Wr == -1)
		{
			close(Op);
			return (-1);
		}
	}
	close(Op);
	return (Wr);
}
