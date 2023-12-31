#include "main.h"

/**
 * _strlen_recursion - length of a string
 *
 * @s: pointer to string
 *
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count;

	count = 0;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (count);
}
