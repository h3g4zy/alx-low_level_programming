#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a node at a given position
  * @head: pointer to pointer of listint_t
  * @index: index of node to be deleted
  * Return: int
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *prev = NULL;
unsigned int count = 0;

if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
listint_t *temp = (*head)->next;
free(*head);
*head = temp;
return (1);
}
while (current != NULL)
{
if (count == index)
{
if (prev != NULL)
prev->next = current->next;
free(current);
return (1);
}
prev = current;
current = current->next;
count++;
}

return (-1);

}