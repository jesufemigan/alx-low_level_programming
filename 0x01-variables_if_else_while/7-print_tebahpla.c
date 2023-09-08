#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always return 0
 */

int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
