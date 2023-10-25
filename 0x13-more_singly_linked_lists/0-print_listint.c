#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0; // Initialize the count to 0

    while (h != NULL)
    {
        printf("%d\n", h->n); // Print the current node's value
        h = h->next; // Move to the next node
        count++; // Increment the count
    }

    return count;
}

