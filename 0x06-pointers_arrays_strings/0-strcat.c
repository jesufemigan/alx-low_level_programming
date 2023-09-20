#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: first string to append
 * @src: last string to append
 *
 * Return: *char
 */

char *_strcat(char *dest, char *src)
{
	char *new_string;

	new_string = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (new_string);
}
