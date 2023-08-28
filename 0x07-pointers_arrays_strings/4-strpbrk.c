#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for 
 * any of a set of bytes
 * @s: string
 * @accept: string containing the
 * characters to match
 * Return: matching index
 */

char *_strpbrk(char *s, char *accept)
{
char *ret;

ret = strpbrk(s, accept);
return (ret);
}
