#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two 
 * diagonals of a square matrix of integers
 * @a: number of array rows
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
int i, sumd1 = 0, sumd2 = 0;

for (i = 0; i < size; i++)
{
sumd1 += a[i];
sumd2 += a[size - i - 1];
a += size;
}
printf("%d, ", sumd1);
printf("%d\n", sumd2);
}
