#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - entry point
 *
 * @argc: count
 * @argv: vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int b;
	char *p = (char *)main;
	b = atoi(argv[1]);

	if (argc != 2)
		printf("Error\n"), exit(1);

	if (b < 0)
		printf("Error\n"), exit(2);

	while (b--)
	{
		printf("%02hhx%s", *p++, b ? " " : "\n");
	}
	return (0);
}
