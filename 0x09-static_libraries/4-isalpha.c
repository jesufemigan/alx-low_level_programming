#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to checl
 *
 * Return: return 1 if c is a letter, lowercase or uppercase, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 97 && c <=
				122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
