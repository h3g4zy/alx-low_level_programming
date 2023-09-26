#include "lists.h"

/**
  * print_listint_safe - prints a listint_t linked list
  * @head: pointer of listint_t
  * 
  * Return: listint_t
  */
size_t print_listint_safe(const listint_t *head)
{
size_t node_count = 0;
const listint_t *slow = head, *fast = head;

if (head == NULL)
{
printf("[0] (nil)\n");
return (0);
}

while (fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
node_count++;

slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
    printf("-> [%p] %d\n", (void *)slow, slow->n);
    break;
}
}

if (fast == NULL || fast->next == NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
node_count++;
}

return (node_count);
}