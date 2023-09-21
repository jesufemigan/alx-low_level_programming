#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	char *new_string = str;

	while (*str)
	{
		char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		int i;

		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*str == letters[i])
			{
				*str = encode[i];
				break;
			}
		}
		str++;
	}
	return (new_string);
}
