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
	int found = 0;

	while (*s && !found)
	{
		if (c == *s)
		{
			found = 1;
		}
		else
		{
			found = 0;
		}
		if (found)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (0);
}
