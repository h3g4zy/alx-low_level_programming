#include "main.h"

/**
 * get_bit - returns the value of
 * a bit at a given index
 * @n: binary number
 * @index: index
 *
 * Return: 0 or 1 and -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bitmask;
if (index >= sizeof(unsigned long int) * 8)
return (-1);
bitmask = 1ul << index;
return ((n & bitmask) ? 1 : 0);
}
