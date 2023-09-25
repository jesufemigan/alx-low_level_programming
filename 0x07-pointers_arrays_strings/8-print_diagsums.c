#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 *
 * @a: the matrix
 * size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, count1, count2;

	for (i = 0 ; i < size; i++)
	{
		count1 += a[i];
		count2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", count1, count2);
}
