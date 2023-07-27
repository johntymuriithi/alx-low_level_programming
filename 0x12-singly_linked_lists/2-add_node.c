#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - funciton thst returns the pointer to the first element
 * @head: pointer to a pointer to the head
 * @str: pointer to the string
 *
 * Return: return pointer to a node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
