#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int n;
	int length;

	n = 0;
	length = 0;

	while (s[n] != 0)
	{
		length++;
		n++;
	}

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
