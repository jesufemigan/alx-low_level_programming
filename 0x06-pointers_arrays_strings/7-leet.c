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
		char letters[] = "aAeEoOtTlL";
		char code[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '7', '\0'};
		int i, found;

		found = 0;

		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*str == letters[i])
			{
				*str = code[i];
				found = 1;
				break;
			}
		}

		if (!found)
		{
			str++;
		}
	}
	return (new_string);
}
