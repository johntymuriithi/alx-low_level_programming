#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert at a particula point
 * @head: head
 * @idx: index to insert
 * @n: data
 *
 * Return: newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int count = 0;
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}
		if (current != NULL)
		{
			newnode->next = current->next;
			current->next = newnode;
		}
		else
		{
			free(newnode);
			return (NULL);
		}
	}
	return (newnode);
}
