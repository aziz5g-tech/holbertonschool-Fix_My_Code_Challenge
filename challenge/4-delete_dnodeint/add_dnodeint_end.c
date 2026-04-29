#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *current;

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (!*head)
    {
        new->prev = NULL;
        *head = new;
        return (new);
    }

    current = *head;
    while (current->next)
        current = current->next;

    current->next = new;
    new->prev = current;

    return (new);
}
