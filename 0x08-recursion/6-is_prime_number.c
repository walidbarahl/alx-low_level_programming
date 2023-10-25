#include "main.h"

/**
 * is_prime_number - check if n is prime number
 * @on: int
 * @n: int
 * Return: 0 or 1
 */

int check_prime(int n, int on);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @on: int
 * Return: int
 */

int check_prime(int n, int on)
{
	if (on >= n && n > 1)
		return (1);
	else if (n % on == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, on + 1));
}
