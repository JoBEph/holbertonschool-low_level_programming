#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t
 * @h: pointer const list
 *
 *Return: Always 0
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
