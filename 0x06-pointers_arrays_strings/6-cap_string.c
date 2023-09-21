#include "main.h"

int is_separator(char c);
/**
 * is_separator - check if string is a separator
 * @c: string to check
 * Return: int
 */

int is_separator(char c)
{
	int i;

	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalizes all words in a string
 *
 * @str: string to capitalize
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	char *new_string;
	int capitalize;

	new_string = str;
	capitalize = 1;

	while (*str)
	{
		if (is_separator(*str))
		{
			capitalize = 1;
		}
		else if (capitalize && ((*str >= 'a' && *str <= 'z')))
		{
			*str -= ('a' - 'A');
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
		str++;
	}
	return (new_string);
}
