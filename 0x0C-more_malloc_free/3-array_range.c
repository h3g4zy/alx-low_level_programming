#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @nmemb: number of elements
 * @size: size of each element in byte
 * Return: 0
 */

int *array_range(int min, int max)
{
int *ptr;
int i;
int total_size;


if (min > max)
return (NULL);

total_size = max - min + 1;

ptr = malloc(total_size * sizeof(int));

if (ptr == NULL)
return (NULL);

for (i = 0; i <= total_size; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
