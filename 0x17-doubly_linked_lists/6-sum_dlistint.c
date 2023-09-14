#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t* current = head;
    
    if (current == NULL)
    {
        return (0);
    }
    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }
    return (sum);
}
