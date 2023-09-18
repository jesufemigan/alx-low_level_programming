#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int length;

	length = 0;

	while (str[length])
	{
		length++;
	}

	length++;
	length /= 2;

	while (str[length])
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
