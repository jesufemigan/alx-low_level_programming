#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);

	if (m == 0)
	{
		exit(98);
	}
	return (m)
}
