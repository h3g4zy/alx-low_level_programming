#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str)
{
int x, y;
char tempo;

for (x = 0; str[x] != '\0'; ++x)
;
for (y = x / 2; str[y] != '\0'; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
