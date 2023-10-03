#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry Point
 *
 * @argc: int
 * @argv: vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int sum;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return(1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);

}
