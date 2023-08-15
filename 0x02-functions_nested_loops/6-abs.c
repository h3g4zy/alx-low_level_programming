#include "main.h"
#include <stdlib.h>

/**
   * _abs - return absolute value of integer
    * @n: integerr to be checked
     * Return: absolute value of integer
      */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		int absolute;
		absolute = n * -1;
		return (absolute);
	}
}
