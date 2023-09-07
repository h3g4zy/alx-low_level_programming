#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @n: integer size
 * @s1: string
 * @s2: strin
 * Return: 0 for success and 98 for failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *result = (char *)malloc(len1 + n + 1);

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

if (n >= len2)
n = len2;


if (result == NULL)
return NULL;

strcpy(result, s1);
strncat(result, s2, n);

return result;
}
