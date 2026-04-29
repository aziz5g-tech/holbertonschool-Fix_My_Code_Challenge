#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current;

    if (!head)
        return;

    current = head;
    while (current)
    {
        head = current->next;
        free(current);
        current = head;
    }
}
