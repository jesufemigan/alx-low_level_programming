#include "main.h"

int square(int n, int val);

/**
 * _sqrt_recursion - the natural square root of number
 *
 * @n: number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - square of a number
 *
 * @n: number
 * @val: value
 *
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
