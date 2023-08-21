#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: nothing
 */

int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; i++)
++i;
return (i);
}