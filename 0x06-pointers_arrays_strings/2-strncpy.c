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
	char *new_string;

	new_string = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (new_string);
}
