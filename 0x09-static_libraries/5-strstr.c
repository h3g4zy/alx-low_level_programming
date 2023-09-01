#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string containing the
 * characters to match
 * Return: characters matching
 */

char *_strstr(char *haystack, char *needle)
{
char *ret;

ret = strstr(haystack, needle);
return (ret);
}
