#include <stdio.h>
#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number
* @n: the integer to be printed last digit of
* Return: Value of the last digit
*/

int print_last_digit(int n)
{
	int o;

	o = n % 10;
	if (o < 0)
	{ o = o * -1;}
	_putchar(o + '0');
	return (o);
}
