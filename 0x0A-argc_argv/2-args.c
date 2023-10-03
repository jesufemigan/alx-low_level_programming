#include <stdio.h>

/**
 * main - Entry Point
 *
 * @argc: int
 * @argv: char
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc ; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
