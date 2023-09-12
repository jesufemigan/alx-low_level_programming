#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to print last digit
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;
	char c;

	if (n < 0)
	{
		last_digit = (n * -1) % 10;
	} else
	{
		last_digit = n % 10;
	}

	c = last_digit;

	_putchar(48 + c);
	return (last_digit);
}
