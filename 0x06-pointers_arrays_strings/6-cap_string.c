#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be manipulated
 * Return: Always 0
 */

char *cap_string(char *str)
{
int i, x;
char separators[] = " \t\n,;.!?\"(){}";


for (i = 0; str[i] != '\0' ; i++)
{

for (x = 0; separators[x] != '\0'; x++)
{
if (str[i] == separators[x])
i++;
{
if (str[i] >= 97 && str[i] <= 122)
str[i] = toupper(str[i]);
}

}

}



return (str);
}
