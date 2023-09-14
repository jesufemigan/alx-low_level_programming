#include <stdio.h>

void largest_prime_factor(long n);

/**
 * main - entry point
 * Return: void
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

/**
 * largest_prime_factor - prints largest prime factor
 * @n: number to print
 * Return: void
 */

void largest_prime_factor(long n)
{
	int i;
	int largest;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i * i < n; i += 2)
	{
		while (n % 1 == 0)
		{
			n /= i;
			largest = i;
		}
	}
	if (n > 2)
	{
		largest = n;
	}
	printf("%d\n", largest);
}
