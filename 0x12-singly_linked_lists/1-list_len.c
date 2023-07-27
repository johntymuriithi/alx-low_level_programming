#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that counts elememts
 * @h: pointer to the fisrt node of the linked list
 *
 * Return: return the no of elemnts
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
