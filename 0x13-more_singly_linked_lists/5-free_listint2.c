#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function to freee some spance
 * @head: nodes
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *nextnode;

	if (head == NULL || *head == NULL)
		return;
	while (current)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
	*head = NULL;
}
