#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: number
 * @other: int
 * Return: 1 if input is a prime number, 0 otherwise.
 */

int check_prime(int n, int other);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - checks prime number
 * @n: number
 * @other: other int
 * Return: 1 if n is prime, 0 otherwise.

int check_prime(int n, int other)
{
if (other >= n && n > 1)
return (1);
else if (n % other == 0 || n <= 1)
return (0);
else
return (check_prime(n, other + 1));
}

