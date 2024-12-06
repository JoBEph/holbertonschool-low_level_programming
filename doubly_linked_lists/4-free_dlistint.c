#include "list.h"

/**
 *free_dlistint - function free dlist
 *@head: pointer dlist
 *Return: ALways 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head!= NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
