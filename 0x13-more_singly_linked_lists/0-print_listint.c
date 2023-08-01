#include <stdio.h>
#include "lists.h"
/**
 * print-listint - function to print out the elements of the linked list
 * @h: head of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
