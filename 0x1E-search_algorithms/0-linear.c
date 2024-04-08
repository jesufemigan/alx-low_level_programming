#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear Search Algorithm
 *
 * @array: pointer to first element in the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is found or -1 if array is NULL or
 * value not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
