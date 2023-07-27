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
	free(head);
}
