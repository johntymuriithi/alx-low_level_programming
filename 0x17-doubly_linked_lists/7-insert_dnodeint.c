#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t* current = *h;
    unsigned int i = 0;

if (*head == NULL)
        return (NULL);    
    dlistint_t* newNode = (dlistint_t*)malloc(sizeof(dlistint_t));
    if (newNode == NULL)
    {
        return (NULL);
    }
    newNode->n = n;
    if (idx == 0)
    {
        newNode->next = current;
        newNode->prev = NULL;
        if (current != NULL)
        {
            current->prev = newNode;
        }
        *h = newNode;
        return (*h);
    }
    while (current != NULL)
    {
        if (i == idx)
        {
            newNode->next = current;
            newNode->prev = current->prev;
            if (current->prev != NULL)
            {
                current->prev->next = newNode;
            }
            current->prev = newNode;
            return (newNode);
        }
        current = current->next;
        i++;
    }
    if (idx > i)
    {
        return (NULL);
    }
    return (NULL);
}
