#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using Jump Search Algorithm
 *
 * @array: pointer to first element in the array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is found or -1 if value not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = sqrt(size), j;

	while (array[right] < value && right < size)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += sqrt(size);
		if (right > size - 1)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	for (j = left; j <= right; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return ((int)j);
	}
	return (-1);
}
