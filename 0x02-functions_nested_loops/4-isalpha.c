#include "main.h"
#include <ctype.h>

/**
   * isalpha: used to check for alphabet characters
    * @c: character to be checked
     * Return: 1 if c is a letter, lowercase or uppsercase. Return 0 otherwise
      */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
