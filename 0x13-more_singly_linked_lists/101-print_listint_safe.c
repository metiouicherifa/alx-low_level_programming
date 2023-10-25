#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    size_t count = 0;
    const listint_t *address[1024]; /* To store unique addresses */

    while (current != NULL)
    {
        int is_duplicate = 0;

        for (size_t i = 0; i < count; i++)
        {
            if (address[i] == current)
            {
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate)
        {
            printf("[%p] %d\n", (void *)current, current->n);
            break;
        }

        address[count++] = current;
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
    }

    return count;
}

