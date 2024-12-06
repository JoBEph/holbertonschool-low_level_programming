#include "main.h"

/**
 *append_text_to_file - function that appends text at the end
 *@filename: const char
 *@text_content: char
 *Return: 0 Always
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int Op;
	ssize_t Wr;
	size_t size = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	Op = open(filename, O_WRONLY | O_APPEND);
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
	return (1);
}
