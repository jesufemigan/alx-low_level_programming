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
	int num;

	for (i = 0; i <= 10; i++)
	{
		n = 0;

		while (n <= 14)
		{
			num = n;

			if (n > 9)
			{
				_putchar(1 + '0');
				num = n % 10;
			}
			_putchar(num + '0');
			n++;
		}
		_putchar('\n');
	}
}
