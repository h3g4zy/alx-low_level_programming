#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - concatenates two strings
 * @nmemb: number of elements
 * @size: size of each element in byte
 * Return: 0 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
size_t total_size = nmemb * size;


if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

memset(ptr, 0, total_size);
return (ptr);

}
