#include "main.h"

/**
 * print_diagonal - a function that 
 * draws a diagonal line on the terminal.
 *  @n: the number of times the
 *  character \ should be printed
 */

void print_diagonal(int n)
{
	int i, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (sp = 0; sp < i; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
