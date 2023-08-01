#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - functino to free up some space
 * @head: head of the linked list
 *
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *nextnode;

	while (current)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
}
