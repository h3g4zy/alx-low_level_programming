#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: string to be reversed
 * @n: number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
int first = 0
int temp;

for (i = (n - 1); i > first; i--)
{
temp = a[first];
a[first] = a[i];
a[i] = temp;
first++;
}
}
