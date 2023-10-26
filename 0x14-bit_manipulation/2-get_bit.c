#include "main.h"

/**
 * get_bit - gets the bit at index
 * @n: number to index
 * @index: the index
 *
 * Return: the bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
