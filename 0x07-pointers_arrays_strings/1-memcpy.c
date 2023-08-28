#include "main.h"

/**
 * _memcpy - copies memory area
 * @s: string to be manipulated
 * @b: constant
 * @n: max bytes to use
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
