#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be manipulated
 * Return: Always 0
 */

char *string_toupper(char *str)
{
while (*str != '\0')
{
*str = toupper(*str);
str++;
}

return (0);
}
