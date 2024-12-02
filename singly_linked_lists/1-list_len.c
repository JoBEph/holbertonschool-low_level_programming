#include "list.h"

/**
 *list_len - function that returns the number of elements
 *@h: pointer const list
 *Return: Always 0
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
