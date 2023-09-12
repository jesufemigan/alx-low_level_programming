#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int n;
	int m;
	int product;

	n = 0;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			product = n * m;
			if (product <= 9)
			{
				_putchar(product + '0');
				_putchar(' ');
			} else
			{
			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
			}
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
