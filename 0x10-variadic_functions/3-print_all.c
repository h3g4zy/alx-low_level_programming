#include "variadic_functions.h"

/**
 * printf_char - printfs a char from var args
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - printfs an int from var args
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - printfs a float from args
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * printf_string - printfs a string from args
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - prints various types given a format string for the arguments
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	
}