#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always return 0
 */

int main(void)
{
	char lowercase, uppercase;

	lowercase = 'a';

	uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
