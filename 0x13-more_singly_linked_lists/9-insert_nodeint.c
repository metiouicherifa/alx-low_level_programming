#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i = 0;

    if (head == NULL)
        return NULL; // Check for NULL head pointer

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL; // Allocation failed

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    current = *head;
    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
    {
        free(new_node);
        return NULL; // Index is out of range
    }

    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}

