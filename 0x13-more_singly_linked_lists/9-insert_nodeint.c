#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to pointer of listint_t
  * @idx: index of list where new node should be added
  * @n: node value
  * Return: listint_t
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current = *head;
unsigned int count = 0;

if ((head == NULL) || (new_node == NULL))
return NULL;

    new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return new_node;
}
while (current != NULL)
{
if (count == idx - 1)
{
new_node->next = current->next;
current->next = new_node;
return new_node;
}
current = current->next;
count++;
}

free(new_node);
return NULL;

}