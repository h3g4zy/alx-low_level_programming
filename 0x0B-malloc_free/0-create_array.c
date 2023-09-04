#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Entry point
 * @size: integer size of array
 * @c: character
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);
unsigned int i;

if (size == 0 || n == 0)
return(0);

for (i = 0; i < size; i++)
n[i] = c;

return (n);
}
