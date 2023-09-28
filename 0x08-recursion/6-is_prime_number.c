#include "main.h"

int check_prime(int n, int val);

/**
 * is_prime_number - check i a number is prime
 *
 * @n: number
 *
 * Return: 1 if prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if prime
 *
 * @n: number
 * @val: divisor
 *
 * Return: int
 */

int check_prime(int n, int val)
{
	if (val >= n && n > 1)
	{
		return (1);
	}
	else if (n % val == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, val + 1));
	}
}
