#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int length;

	length = 0;
	

	while (str[length])
	{
		length++;
	}

	n = length / 2;

	while (n <= length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
