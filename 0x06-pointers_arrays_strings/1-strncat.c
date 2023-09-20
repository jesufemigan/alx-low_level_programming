#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes available
 *
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *new_string;

	new_string = dest;

	while (*dest)
	{
		dest++;
	}

	while (n-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest + 1) = '\0';

	return (new_string);
}
