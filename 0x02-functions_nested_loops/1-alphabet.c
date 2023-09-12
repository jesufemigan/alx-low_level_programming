#include "main.h"

/**
 * print_alphabet - this prints all the alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
