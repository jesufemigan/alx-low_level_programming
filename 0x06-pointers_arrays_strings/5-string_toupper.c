#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string to change
 *
 * Return: uppercase character
 */

char *string_toupper(char *str)
{
	char *new_string;

	new_string = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (new_string);
}
