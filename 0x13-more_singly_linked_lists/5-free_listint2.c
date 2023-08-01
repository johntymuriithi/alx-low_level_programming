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
	listint_t *current;
	listint_t *nextnode;

	if (head == NULL || *head == NULL)
		return;
	current = *head;

	while (current)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
	*head = NULL;
}
