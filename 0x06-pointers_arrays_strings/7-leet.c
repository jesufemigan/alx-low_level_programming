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
		char code[] = "4433007717";
		int i;

		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*str == letters[i])
			{
				*str = code[i];
				break;
			}
		}

		str++;
	}
	return (new_string);
}
