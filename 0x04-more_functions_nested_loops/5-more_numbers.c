#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 10; i++)
	{
		n = 0;

		while (n <= 14)
		{
			_putchar(n + '0');
			n++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
