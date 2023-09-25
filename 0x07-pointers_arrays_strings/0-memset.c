#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memery area
 * @b: constant byte
 * @n: first n byte
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
