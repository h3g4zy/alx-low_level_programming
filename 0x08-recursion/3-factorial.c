#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Number
 * Return: factorial of n
 */

int factorial(int n)
{
int fact = 1;

if (n > 0)
{
fact *= n * factorial(n - 1);
}
else if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}

return (fact);
}

