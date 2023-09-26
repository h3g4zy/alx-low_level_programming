#include "lists.h"

/**
  * print_listint_safe - prints a listint_t linked list
  * @head: pointer of listint_t
  * 
  * Return: listint_t
  */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t node_count = 0;
const listint_t *loop_start = NULL;

while (current != NULL)
{
if (current == loop_start)
{
printf("[%p] %d\n", (void *)current, current->n);
break; // Detected a loop, exit the loop
}

printf("[%p] %d\n", (void *)current, current->n);
node_count++;

if (current->next >= current)
loop_start = current->next;

current = current->next;
}

return (node_count);

}