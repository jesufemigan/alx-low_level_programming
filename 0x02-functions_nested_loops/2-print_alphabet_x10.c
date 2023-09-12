#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in  a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n;

	n = 0;

	while (n <= 10)
	{
		char letter;

		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		n++;
	}
}
