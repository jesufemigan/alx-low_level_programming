#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int digit;
	int divisor = 1;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
