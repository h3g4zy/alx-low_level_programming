#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: input string
 * Return: nothing
 */

void puts2(char *str)
{
int x;

for (x = 0; str[x] != '\0'; ++x)
{
if (x % 2 == 0)
_putchar(str[x]);
}
_putchar('\n');
}
