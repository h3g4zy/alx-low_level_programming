#include "main.h"

/**
 * set_bit - sets the value of a
 * bit to 1 at a given index
 * @n: pointer to binary number
 * @index: index at which the value
 * will change
 *
 * Return: 1 success, -1 failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitmask = 1ul << index;
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n |= bitmask;

return (1);
}
