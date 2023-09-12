#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int n;
	unsigned long int m;
	unsigned long int next;
	unsigned long int total;

	n = 0;

	m = 1;

	total = 0;

	while (total < 50)
	{
		next = n + m;
		printf("%lu", next);
		
		n = m;
		
		m = next;

		if (total != 49)
		{
			printf(", ");
		} else
		{
			printf("\n");
		}

		total++;
	}
	printf("\n");
	return (0);
}
