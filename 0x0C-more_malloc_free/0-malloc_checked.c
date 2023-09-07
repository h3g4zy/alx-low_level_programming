#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer size of array
 * Return: 0 for success and 98 for failure
 */
void *malloc_checked(unsigned int b)
{
char *n = malloc(b);

if (b == 0 || n == NULL)
exit (98);

return (n);
}
