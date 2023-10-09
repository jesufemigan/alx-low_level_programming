#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _memset - set memory to 0
 *
 * @s: pointer
 * @b: byyes
 * @n: num
 *
 * Return: int
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: num
 * @size: size
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
