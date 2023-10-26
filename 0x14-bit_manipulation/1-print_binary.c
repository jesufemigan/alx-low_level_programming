#include "main.h"
#include <limits.h>

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to convert
 * Return: binary representation of n
 */

void print_binary(unsigned long int n)
{
	unsigned long int ibit = sizeof(n) * 8, printed = 0;

	while (ibit)
	{
		if (n & 1L << --ibit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}
	if (!printed)
		_putchar('0');
}
