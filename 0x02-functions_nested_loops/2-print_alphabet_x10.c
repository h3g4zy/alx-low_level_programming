#include "main.h"

/**
   * main - Entry point
    * 
     * Description: print_alphabet_x10
      * @parameter: print_alphabet_x10r
       * 
        * Return: Always 0 (Success)
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
