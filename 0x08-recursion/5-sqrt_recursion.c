#include "main.h"

/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: number
 * Return: square root of n
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find sqroot
 * @val: sqaure root
 * Return: int
 */

int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}

