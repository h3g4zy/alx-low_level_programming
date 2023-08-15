#include "main.h"
#include <ctype.h>

/**
  * _islower - a function that checks for lowercase character
  * c is the character we would check for being lowercase
  * Return: 1 if c is lowercase , 0 otherwise.
  */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
