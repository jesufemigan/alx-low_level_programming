#include "main.h"

/**
 * _islower - checks for lowercase letter
 *
 * @c: character to check
 *
 * Return: 1 if c is lower and 0 if not
 */

int _islower(int c)
{
	if (c < 97 && c > 122)
	{
		return (0);
	}
	return (1);
}
