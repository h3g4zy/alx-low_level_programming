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
char *copy;
unsigned int count_s1, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";


count_s1 = 0;

while (s1[count_s1] != '\0')
count_s1++;



copy = (char *) malloc(count_s1 + n + 1);

if (copy == NULL)
return (NULL);


for (i = 0; i <= count_s1; i++)
{
copy[i] = s1[i];
}


j = count_s1;

for (i = 0; i + j <= (count_s1 + n); i++)
{
copy[i + j] = s2[i];
}

printf("%d \n", strlen(copy));
return (copy);
}
