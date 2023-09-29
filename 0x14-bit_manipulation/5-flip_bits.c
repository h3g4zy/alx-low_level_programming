#include "main.h"

/**
 * flip_bits - returns number of bits you
 * will beed to flip to get from one
 * number to another
 * @n: number
 * @m: another number
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_res = n ^ m;
unsigned int i = 0;

while (xor_res > 0)
{
i += xor_res & 1;
xor_res >>= 1;
}
return (i);
}
