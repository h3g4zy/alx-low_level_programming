#include "main.h"

/**
 * reset_to_98 - swaps the values of two integers
 * and updates the value it points to 98
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;
    
    c = *a;
    *a = *b;
    *b = c;
}
