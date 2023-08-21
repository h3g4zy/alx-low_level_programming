#include "main.h"

/**
 * _strlen - prints a string, followed by a new line
 * @str: input string
 * Return: nothing
 */

void _puts(char *str)
{
int i;

for (i = 0; *str != '\0'; str++)
{
_putchar(*str + '0');
i++;
}
_putchar('\n');
}
