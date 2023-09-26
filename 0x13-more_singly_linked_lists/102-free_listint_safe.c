#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to a pointer to the head of the linked list
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
    size_t node_count = 0;
    listint_t *current = *h;
    listint_t *next_node = NULL;
    listint_t *loop_start = NULL;

    while (current != NULL)
    {
        if (current == loop_start)
        {
            *h = NULL;
            return node_count;
        }

        next_node = current->next;
        free(current);
        node_count++;

        if (next_node >= current)
            loop_start = next_node;

        current = next_node;
    }

    *h = NULL;
    return node_count;
}
