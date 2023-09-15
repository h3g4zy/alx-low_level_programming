#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator of strings
 * @n: number of strings
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;


if (!n)
{
printf("\n");
return;
}

va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%s", va_arg(args, char *));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
