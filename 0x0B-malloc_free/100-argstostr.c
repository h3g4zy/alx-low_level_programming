#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Integer arg count
 * @av: pointer to array of args.
 * Return: pointer to concated string
 */

char *argstostr(int ac, char **av)
{
int i;
char *str;
size_t total_length = 0;
size_t current_pos = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
if (av[i] != NULL)
total_length += strlen(av[i]) + 1;
}

str = (char *)malloc(total_length + 1);
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
if (av[i] != NULL)
{
size_t arg_length = strlen(av[i]);
strncpy(str + current_pos, av[i], arg_length);
current_pos += arg_length;
str[current_pos++] = '\n';
}
}

str[total_length] = '\0';


return (str);

}
