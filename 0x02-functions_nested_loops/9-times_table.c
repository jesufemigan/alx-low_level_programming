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

	n = 0;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			_putchar((n * m) + '0');
			_putchar(' ');
			_putchar(' ');
			if (m != 9)
			{
				_putchar(',');
			}
			_putchar('\n');
			m++;
		}
		n++;
	}
}
