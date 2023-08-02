#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - function to rverse linkde list
 * @head: head
 *
 * Return: pointer to the fisrt node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nextnode;

	while (*head)
	{
		nextnode = (*head)->next;
		(*head)->next = prev;
		prev = *head;

		*head = nextnode;
	}
	*head = prev;

	return (*head);
}
