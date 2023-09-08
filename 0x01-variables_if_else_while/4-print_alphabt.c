#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always return 0
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
		if (letter == 'e' || letter == 'q')
		{
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
