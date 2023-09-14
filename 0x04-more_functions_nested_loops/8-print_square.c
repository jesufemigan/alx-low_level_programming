#include "main.h"

/**
 * print_square - prints a square
 * @size: size of  square
 * Return: void
 */

void print_square(int size)
{
	int row;
	int count;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = size;

		while (row > 0)
		{
			count = size;

			while (count > 0)
			{
				_putchar('#');
				count--;
			}
			_putchar('\n');
			row--;
		}
	}
}
