#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - exectute before main()
 * 
 * Return: void
*/
void _constructor(void)
{
    priftf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}