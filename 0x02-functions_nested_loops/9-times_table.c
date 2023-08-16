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

	    for (col = 0; col <= 9; col++)
		        {
			for (x = 0; x < 10; x++)
			{
				if (x < 9)
				{	
					n = x * col;
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
				}
	               else
													                 {
																                     _putchar(n + '0');
																		                         _putchar('$');
																					                 }

												         }
					        _putchar('\n');

						    }

}
