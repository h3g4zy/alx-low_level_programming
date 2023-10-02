#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: pointer to pointer of listint_t
  * 
  * Return: listint_t
  */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next_node = NULL;

while (current != NULL)
{
next_node = current->next;
current->next = prev;
prev = current;
current = next_node;
}

*head = prev;

return *head;
}