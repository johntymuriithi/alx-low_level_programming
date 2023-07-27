#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free up space
 * @head: first node
 *
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);      
		current = next_node;
	}
}
