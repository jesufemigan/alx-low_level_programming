#include "main.h"

/**
 * _strcpy - copies a string to another string
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i]);

	return (dest);
}
