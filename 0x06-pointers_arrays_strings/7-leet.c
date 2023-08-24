#include "main.h"
#include <string.h>
#include <ctype.h>


/**
 * leet - encodes a string into 1337
 * @s: string to be manipulated
 * Return: s
 */

char *leet(char *s)
{
char *cp = s;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7 ,1};
int i;

while (*s)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
    if (*s == key[i] || *s == key[i] + 32)
    {
        *s = 48 + value[i];
    }
}
s++;
}
return (cp);
}
