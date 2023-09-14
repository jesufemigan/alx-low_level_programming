#include "main.h"

/**
 * print_numbers - prints the number 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
