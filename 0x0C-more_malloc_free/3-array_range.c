#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integer
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int *m;

	if (min > max)
		return (NULL);

	m = malloc(sizeof(int) * (max - min + 1);
	if (m == 0)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		m[i] = min;
	}
	return (m);
}
