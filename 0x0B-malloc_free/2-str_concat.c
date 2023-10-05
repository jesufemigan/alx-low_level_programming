#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * _strlen - get length of a string
 *
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s)
	{
		n++;
	}
	return (n);
}

/**
 * str_concat - concatenates two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *new_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	new_string = malloc((size1 + size2) * sizeof(char) + 1);

	if (new_string == 0)
		return (NULL);

	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
			new_string[i] = s1[i];
		else
			new_string[i] = s2[i - size1];
	}
	new_string[i] = '\0';

	return (new_string);
}
