#include <stdio.h>
#include "main.h"

/*
   * times_table - a function that prints the 9 times table, starting with 0.
   * Return: 0
   */

void times_table(void)
{
	int col;
	int n;
	int x;
	int n1, n2;

	    for (col = 0; col <= 9; col++)
		        {
			for (x = 0; x < 10; x++)
			{
				n = x * col;
			if (n > 9)
			{
				n2 = n % 10;
				n1 = (n - n2) / 10;
			}
				if (x < 9)
				{
					if (n < 9)
					{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
					}
					else
					{
					_putchar(n1 + '0');
					_putchar(n2 + '0');
					_putchar(',');
					_putchar(' ');
					}
				}
	               		else
		       		{
					if (n < 9)
					{
					_putchar(n + '0');
					_putchar('$');
					}
					else
					{
						_putchar(n1 + '0');
						_putchar(n2 + '0');
						_putchar('$');
					}
				}
			}
		        _putchar('\n');
			}

}
