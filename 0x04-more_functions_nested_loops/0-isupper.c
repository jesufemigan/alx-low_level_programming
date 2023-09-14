#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: character to check
 *
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	} else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
}
