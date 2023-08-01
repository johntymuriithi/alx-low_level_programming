#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: head of the linked list
 * @n: node
 *
 * Return: the address of the created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
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
