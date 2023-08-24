#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concated
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int c, i;

c = 0;


for (i = 0; i < n && src[i] != '\0'; i++)
{
    dest[i] = src[i];
}
while (i < n)
dest[i++] = '\0';

return (dest);
}