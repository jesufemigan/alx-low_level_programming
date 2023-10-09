#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string2
 * @n: bytes number
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length, s2_length, i, j;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; i++, s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; i++, s2_length++)
		;

	new_string = malloc(s1_length + n + 1);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		new_string[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		new_string[i] = s2[j];
		i++;
	}

	new_string[i] = '\0';

	return (new_string);
}
