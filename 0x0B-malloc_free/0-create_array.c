#include "main.h"
#include <stdlib.h>

/**
 * create_array - an array of chars, and intializes with a specific char
 *
 * @size: size of array
 * @c: character
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *new_array;

	new_array = malloc(size * sizeof(char));
	
	if (size == 0)
	{
		return (NULL);
	}

	while (size--)
	{
		new_array[size] = c;
	}

	return (new_array);
}
