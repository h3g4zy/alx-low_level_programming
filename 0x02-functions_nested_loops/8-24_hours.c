#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  * jack_bauer -  function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
  * Returns: 0
 * ab:cd 
 */

void jack_bauer(void)
{
	int hours;
	char a_clone[20];
	char b_clone[20];
	int a, b, c, d;

		for (a = 0; a <= 2; a++)
		{
		for (b = 0; b <= 9; b++)
		{
		if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
		{
		for (c = 0; c <= 5; c++)
		{
		for (d = 0; d <= 9; d++)
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
		}
		}
		}
}
		
}