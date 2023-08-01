#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint  -delete the node head
 * @head: head node
 *
 * Return: data node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int info;

	if (*head == NULL)
		return (0);

	info = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (info);
}
