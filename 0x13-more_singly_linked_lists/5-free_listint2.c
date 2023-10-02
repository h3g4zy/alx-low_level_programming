#include "lists.h"

/**
  * free_listint2 - sets the head to NULL
  * @head: pointer to pointer of listint_t
  *
  * Return: Void
  */

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

    if (!head)
        return;
    
    node = *head;
    while (node)
    {
        temp = node;
        node = node->next;
        free(temp);
    }
    *head = NULL;
}
