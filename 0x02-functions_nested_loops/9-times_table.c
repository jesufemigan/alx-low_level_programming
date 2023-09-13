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

			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(product + '0');
				} else
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
			} else 
			{
				_putchar(product + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
