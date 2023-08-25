#include "main.h"
#include <string.h>


/**
 * rot13 - encodes a string using rot13
 * @s: string to be manipulated
 * Return: s
 */

char *rot13(char *s)
{
int i;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = s;

while (*s)
{
for (i = 0; i <= 52; i++)
{
if (*s == alpha[i])
{
*s = rot13[i];
break;
}
}
s++;
}
return (ptr);
}
