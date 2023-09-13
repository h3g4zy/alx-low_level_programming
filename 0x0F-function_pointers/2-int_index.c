#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - executes a function given as a parameter
 * @array: pointer to array
 * @size: size
 * @cmp: pointer to compare function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
return (-1);
for (i=0; i < size; i++)
{
if (cmp(array[i]))
return(i);
}
return(-1);
}