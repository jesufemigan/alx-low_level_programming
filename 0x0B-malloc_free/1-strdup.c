#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a ponter to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *new_string;
	int size, i;

	size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	new_string = malloc(size * sizeof(char) + 1);

	if (new_string == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_string[i] = str[i];
	}
	return (new_string);
}
