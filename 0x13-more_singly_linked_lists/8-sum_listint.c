#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums up the nodes data
 * @head: head node
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
