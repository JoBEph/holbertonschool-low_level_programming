#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer dlist
 * @index: unsigned int
 * Return: Always 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head != NULL)
	{
		if (index == idx)
		{
			return (head);
		}
		idx++;
		head = head->next;
	}
	return (NULL);
}
