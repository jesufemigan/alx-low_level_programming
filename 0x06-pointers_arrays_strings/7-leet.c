#include "main.h"

/**
 * leet - fucntion that encodes a string
 * @str: string to encode
 *
 * Return: char
 */

char *leet(char *str)
{
	char *new_string;

	new_string = str;

	while (*str)
	{
		if (*str == 'a' || *str == 'A')
		{
			*str = '4';
		}
		else if (*str == 'e' || *str == 'E')
		{
			*str = '3';
		}
		else if (*str == 'o' || *str == 'O')
		{
			*str = '0';
		}
		else if (*str == 't' || *str == 'T')
		{
			*str = '7';
		}
		else if (*str == 'l' || *str == 'L')
		{
			*str = '1';
		}
		else
		{
			*str = *str;
		}
		str++;

	}
	return (new_string);
}
