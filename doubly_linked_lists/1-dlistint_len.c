#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: pointer
 * Return: Always 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
