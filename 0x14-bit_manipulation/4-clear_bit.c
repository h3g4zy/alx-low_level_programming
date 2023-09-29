#include "main.h"

/**
 * clear_bit - sets the value of
 * a bit to 0 at a given index
 * @n: pointer to number
 * @index: index
 *
 * return: 1 success, -1 failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitmask = 1ul << index;
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n &= ~bitmask;
return (1);
}
