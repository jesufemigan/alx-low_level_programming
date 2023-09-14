#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row;
	int shape;
	int count;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (shape = 1; shape <= size - row ; shape++)
		{
			_putchar(' ');
		}
		for (count = 0; count < row; count++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
