#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry Point
 *
 * @argc: argument count
 * @argv: vector argument
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num1, num2, (*op_func)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if(!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(num1, num2));
	return (0);
}
