#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - add nodes at the end
 * @head: pointer to a pointer
 * @str: pointer to the string
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *current;

	if (str == NULL)
		return (NULL);

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	current = *head;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
