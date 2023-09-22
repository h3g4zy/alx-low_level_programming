#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head)
{
    list_t *current;
    list_t *next;

    current = head;

    while (current != NULL)
    {
        next = current->next;  // Store the next node pointer
        free(current->str);   // Free the string (if not NULL)
        free(current);        // Free the node itself
        current = next;       // Move to the next node
    }
}