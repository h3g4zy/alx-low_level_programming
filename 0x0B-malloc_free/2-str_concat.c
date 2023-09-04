#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @str: string to be copied
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
char *copy;
int count_s1, count_s2, i, j;

if (s1 == NULL || s2 == NULL)
return (NULL);


count_s1 = 0;
count_s2 = 0;

while (s1[count_s1] != '\0')
count_s1++;
while (s2[count_s2] != '\0')
count_s2++;

copy = (char *) malloc(count_s1 + count_s2 + 1);

if (copy == NULL)
return (NULL);

for (i = 0; i <= count_s1; i++)
{
copy[i] = s1[i];
j = i;
}

for (i = 0; i + j <= count_s2 + count_s1; i++)
copy[i + j] = s2[i];

return (copy);
}
