#include "lists.h"

/**
  * free_listint - frees a listint_t list
  * @head: pointer to pointer of listint_t
  *
  * Return: Void
  */

void free_listint(listint_t *head)
{
	listint_t *node;

    while (head)
    {
        node = head;
        head = head->next;
        free(node);
    }
}
