#include "main.h"

/**
 * _strncpy - copirs a string
 *
 * @dest: original string
 * @src: string to copy
 * @n: number of bytes available
 *
 * Return: pointer to returned string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
