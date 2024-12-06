#include "lists.h"

/**
 *insert_dnodeint_at_index - function that inserts a new node at a given position
 *@idx: unsigned int
 *@n: int
 *Return: Always 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *prev_node = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (x < (idx - 1))
	{
		if (!prev_node)
		{
			return (NULL);
		}
		prev_node = prev_node->next;
		x++;
	}
	if (prev_node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
		new_node->n = n;
		new_node->next = prev_node->next;
		new_node->prev = prev_node;
		prev_node->next->prev = new_node;
		prev_node->next = new_node;

		return (new_node);
}
