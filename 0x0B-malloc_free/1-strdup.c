#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
char *copy;
int count, i;

if (str == NULL)
return (NULL);


count = 0;

while (str[count] != '\0')
count++;


copy = (char *) malloc(count + 1);

if (copy == NULL)
return (NULL);

for (i = 0; i <= count; i++)
copy[i] = str[i];

return (copy);

free(copy);
}
