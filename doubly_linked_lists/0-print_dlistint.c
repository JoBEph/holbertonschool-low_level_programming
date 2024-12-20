#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 *@h: pointer
 *Return: Always 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
