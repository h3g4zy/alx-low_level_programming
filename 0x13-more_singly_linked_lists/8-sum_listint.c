#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n)
  * @head: pointer to pointer of listint_t
  * 
  * Return: pointer to node
  */

int sum_listint(listint_t *head)
{
int sum;
listint_t *current = head;

sum = 0;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}