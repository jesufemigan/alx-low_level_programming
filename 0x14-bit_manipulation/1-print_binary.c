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
	unsigned long int track = 1UL << (sizeof(n) * CHAR_BIT - 1);

	while (track)
	{
		if ((n & track) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		track >>= 1;
	}
}
