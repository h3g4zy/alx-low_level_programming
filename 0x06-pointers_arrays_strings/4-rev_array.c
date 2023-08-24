#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: string to be reversed
 * @n: number of elements of array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
int i,first;
int temp;

first = 0;

for (i = (n - 1); i > first; i--)
{
temp = a[first];
a[first] = a[i];
a[i] = temp;
first++;
}
}
