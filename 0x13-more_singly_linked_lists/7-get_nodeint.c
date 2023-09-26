#include "lists.h"

/**
  * get_nodeint_at_index - deletes the head node of
  * a listint_t linked list, and returns
  * the head node’s data (n)
  * @head: pointer to pointer of listint_t
  * @index: index of node
  * 
  * Return: pointer to node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *current = head;

    while (current != NULL)
    {
        if (count == index)
        {
            return (current);
        }
        current = current->next;
        count++;
    }

    return (NULL);
}