#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * _strlen - legnth of string
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
		s++;
	}
	return (n);
}

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int nc = 0, i = 0, j = 0, ni = 0;
	char *new_string;

	for (; i < ac; i++, nc++)
	{
		nc += _strlen(av[i]);
	}

	if (ac == 0 || av == NULL)
		return (NULL);

	new_string = malloc(nc * sizeof(char) + 1);

	if (new_string == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, ni++)
		{
			new_string[ni] = av[i][j];
		}
		new_string[ni] = '\n';
		ni++;
	}

	return (new_string);
}
