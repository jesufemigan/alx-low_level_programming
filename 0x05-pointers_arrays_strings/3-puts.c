#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int n;

	n = 0;

	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
