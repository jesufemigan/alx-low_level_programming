#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer to first occurence of character
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] >= '\0')
	{
		if (*s == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
