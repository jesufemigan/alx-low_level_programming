#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always return 0
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
