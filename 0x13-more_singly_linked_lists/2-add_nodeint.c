#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add newnode in the begginng of the list
 * @head: head of the linked list
 * @n: node
 *
 * Return: the addresss of the nenode created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
