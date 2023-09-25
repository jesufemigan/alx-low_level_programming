#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes to accept
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;

	count = 0;

	while (*accept)
	{
		while (*s)
		{
			if (*accept == *s)
			{
				count++;
			}
			s++;
		}
		accept++;
	}
	return (count);
}
