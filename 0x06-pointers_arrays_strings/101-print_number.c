#include "main.h"
#include <string.h>


/**
 * print_number - prints an integer.
 * @n: number to be printed
 * Return: Void
 */

void print_number(int n)
{
unsigned int n1;

n1 = n;

if (n < 0)
{
    _putchar('-');
    n1 = -n;
}
if (n1 / 10 != 0)
{
    print_number(n1 / 10);
}
_putchar((n1 % 10) + 48);
}