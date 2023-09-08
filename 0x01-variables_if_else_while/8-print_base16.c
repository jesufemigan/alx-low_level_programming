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

	while (n <= 16)
	{
		if (n <= 9)
		{
			putchar('0' + n);
		} else if (n > 9)
		{
			putchar('a' + (n - 10));
		}
		n++;
	}
	putchar('\n');
	return (0);
}
