#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: int
 * @argv: char
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
