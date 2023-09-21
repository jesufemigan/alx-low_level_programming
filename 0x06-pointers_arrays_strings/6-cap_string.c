#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 *
 * @str - string to capitalize
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	char *new_string;

	new_string = str;

	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '.' || *str == '\t'
				|| *str == ',' || *str == ';' || *str == '!' ||
				*str == '?' || *str == '"' || *str == '(' ||
				*str == ')' || *str == '{' || *str == '}')
		{
			str++;
			if (*str >= 'a' && *str <= 'z')
			{

				*str = *str - ('a' - 'A');
			}
			else
			{
				str--;
			}
		}
		str++;
	}
	return (new_string);
}
