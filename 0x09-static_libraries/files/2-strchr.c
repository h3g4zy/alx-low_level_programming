#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
char *ret;

ret = strchr(s, c);

return (ret);
}
