#include "main.h"

/**
 * more_numbers -  a function that prints 10
 *  times the numbers, from 0 to 14, 
 *  followed by a new line.
 *  Return: 0
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
