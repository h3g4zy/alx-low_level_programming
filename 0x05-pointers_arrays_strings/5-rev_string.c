#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: nothing
 */

void rev_string(char *s)
{
int x, y;
char tempo;

for (x = 0; s[x] != '\0'; ++x)
;

for (y = 0; y < x / 2; y++)
{
tempo = s[y];
s[y] = s[x - 1 - y];
s[x - 1 - y] = tempo;
}
}
