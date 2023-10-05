#include "main.h"

/**
 * _strdup - returns a ponter to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: char
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *new_string;
	int size;

	size = 0;

	while (str++)
	{
		size++;
	}

	new_string = malloc(size * sizeof(char) + 1);

	if (new_string == 0)
		return (NULL);

	for (; i < size; i++)
	{
		new_string[i] = str[i];
	}
	return (new_string);
}
