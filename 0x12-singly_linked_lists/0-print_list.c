#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    unsigned long int node_count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("(nil)");
        else
            printf("[%d] %s\n", strlen(h->str), h->str);

        h = h->next;
        node_count++;
    }

    return (node_count);
}