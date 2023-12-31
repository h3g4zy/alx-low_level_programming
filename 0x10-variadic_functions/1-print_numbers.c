#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator of numbers
 * @n: number of integers
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
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
printf("%d", va_arg(args, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
