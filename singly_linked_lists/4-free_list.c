#include "lists.h"

/**
 *free_list - free node
 *@head: pointer
 *Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
