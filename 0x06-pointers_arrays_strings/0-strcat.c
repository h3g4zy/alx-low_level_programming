#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
char *ptr = strcat(dest, src);
return (ptr);
}