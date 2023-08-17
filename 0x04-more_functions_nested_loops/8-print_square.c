#include "main.h"

/**
 * print_square - a function that draws
 *  sqaure in the terminal.
 *  @size: the size of sqaure
 */

void print_square(int size)
{
	int x, y;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for(x = 0; x < size; x++)
		{
		for (y = 0; y < size; y++)
		{
			if ( y == size - 1)
			{
				_putchar('#');
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		}
	}
}
