#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function to return the node specigfied
 * @head: head
 * @index: index to find
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
