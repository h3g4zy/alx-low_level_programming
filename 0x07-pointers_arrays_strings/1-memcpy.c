#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: length of copied characters
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int itr;

for (itr = 0; itr < n; itr++)
{
dest[itr] = src[itr];
}

return (dest);
}
