#include "main.h"

/**
 * _strcmp - compares two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: difference of the ascii value of first different characters
 */

int _strcmp(char *s1, char *s2)
{
	int diff;

	diff = 0;

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			diff = (int)*s1 - (int)*s2;
			break;
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (diff);
}
