#include <stdio.h>

/**
 *  main - Entry Point
 *
 *  Return: Always return 0
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
