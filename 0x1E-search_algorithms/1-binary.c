#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);

/**
 * print_array - function to print searching arrays
 * @array: pointer to first element of array
 * @start: beginning of array
 * @end: end of array
 */

void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		if (start != end)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using binary search algorithm
 *
 * @array: pointer to the first element in the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located or return -1 if array is NULL or
 * value not present in array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
