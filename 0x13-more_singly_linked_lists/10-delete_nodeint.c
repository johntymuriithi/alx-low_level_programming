#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index  - delet node
 * @head: head
 * @index: specified index
 *
 * Return: 1 or negation of 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	else
	{
		while (current != NULL && count < index - 1)
		{
			count++;
			current = current->next;
		}

		if (current == NULL || current->next == NULL)
			return (-1);

		temp = current->next;
		current->next = current->next->next;
		free(temp);

	}
	return (1);
}
