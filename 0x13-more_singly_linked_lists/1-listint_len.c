#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function which returns the number of nodes in a linked list
 * @h: head
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
