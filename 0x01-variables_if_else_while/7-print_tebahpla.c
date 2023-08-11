#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
char digit;

for (digit = 'z'; digit >= 'a'; digit--)
{
	putchar(digit);
}
putchar('\n');

return (0);
}
