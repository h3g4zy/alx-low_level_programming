#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string containing the
 * characters to match
 * Return: initial matching length
 */

unsigned int _strspn(char *s, char *accept)
{
int len;

len = strspn(s, accept);

return (len);
}
