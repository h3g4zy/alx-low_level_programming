#include "main.h"

/**
 * isupper - function to check whether a character is uppercase or not
 * Return: 0 if lowercase, 1 if uppercase
 * @c: character
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);	
}
