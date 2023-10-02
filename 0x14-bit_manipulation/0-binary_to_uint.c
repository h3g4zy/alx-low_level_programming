#include "main.h"

/**
 * binary_to_uint - convert binary number to 
 * an unsinged int
 * @b: pointer to string of binary numbers
 *
 * Return: Unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;
	int length = strlen(b);

	if (b == NULL)
	return (0);
	
	for (i = 0; i < length; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
		val <<= 1;
		val += b[i] - '0';
		}
		else
		{
		val = 0;
		break;
		}
	}
return (val);
}
