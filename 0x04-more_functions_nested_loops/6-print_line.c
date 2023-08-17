#include "main.h"

/**
 * print_line - a function that draws
 *  a straight line in the terminal.
 *  @n: the number of times the 
 *  character _ should be printed
 *  Return: void
 */

void print_line(int n)
{
	int print;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (print = 0; print <= n; print++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
