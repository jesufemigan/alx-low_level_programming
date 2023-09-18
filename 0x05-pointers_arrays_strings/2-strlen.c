#include "main.h"

/**
 * _strlen - gets length of a string
 * @s: string to check
 * Return: length of string
 */

int _strlen(char *s)
{
	int n;
	int length;

	n = 0;
	length = 0;

	while (s[n] != 0)
	{
		length++;
		n++;
	}
	return (length);
}
