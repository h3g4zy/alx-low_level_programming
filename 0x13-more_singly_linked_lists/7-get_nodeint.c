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
	listint_t *node;
    unsigned int n;

    for (node = head, n = 0; node && n < index; node->next, n++)
        return(node);
    
   
}
