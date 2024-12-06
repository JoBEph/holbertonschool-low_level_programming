#include "lists.h"

/**
 *delete_dnodeint_at_index - function that deletes the node at index
 *@head: double pointer dlist
 *@index: unsigned int
 *Return: Always 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *idx = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = idx->next;
		if (idx->next != NULL)
		{
			idx->next->prev = NULL;
		}
		free(idx);
		return (1);
	}
	while (x < index)
	{
		if (idx == NULL)
			return (-1);
		idx = idx->next;
		x++;
	}
	idx->prev->next = idx->next;
	if (idx->next != NULL)
		idx->next->prev = idx->prev;

	free(idx);
	return (1);
}
