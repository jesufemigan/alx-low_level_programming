#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: number of diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int start;
	int pos;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		start = 1;

		while (start <= n)
		{
			pos = 1;

			while (pos <= start)
			{
				_putchar(' ');
				pos++;
			}
			_putchar('\\');
			_putchar('\n');
			start++;
		}
	}
}
