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

	last_digit = n % 10;

	char c = last_digit;

	_putchar(c);
	return (last_digit);
}
