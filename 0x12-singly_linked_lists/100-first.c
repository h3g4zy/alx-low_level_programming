#include "lists.h"

/**
 * print_before_main - Prints the desired text before the main function.
 */
void print_before_main(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

/**
 * main - The main function where the program execution starts.
 *
 * Return: Always 0.
 */
int main(void)
{
    /* Call the function to print the desired text */
    print_before_main();

    /* Rest of the main function */
    printf("This is the main function.\n");

    return (0);
}
