#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end
 *@str: const char
 *@head: double pointer
 * Return: Always 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
		new_node->len = len;
		new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
		temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
