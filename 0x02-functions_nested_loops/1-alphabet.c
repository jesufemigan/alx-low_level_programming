#include "main.h"

/**
 * main - Entry Point
 *
 * Return: always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
}
