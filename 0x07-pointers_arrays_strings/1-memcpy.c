#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		dest[n] = src[n];
		n--;
	}

	return (dest);
}
