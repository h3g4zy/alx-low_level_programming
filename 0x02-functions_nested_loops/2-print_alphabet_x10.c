#include "main.h"

/**
* print_alphabet_x10 - Make alphabet x10 times
* Return: void
*/

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 1; i <= 10; i++)
	{
		char z;

		for (z = 'a'; z <= 'z'; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
