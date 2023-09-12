#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int total;

	n = 1;

	total = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			total += n;
		}
		n++;
	}
	printf("%d\n", total);

	return (0);
}
