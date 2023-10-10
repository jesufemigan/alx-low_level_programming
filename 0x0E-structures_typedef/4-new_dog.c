#include <stdio.h>
#include "dog.h"

/**
 * _strlen - gets length of string
 *
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}

/**
 * _strcopy - copy strings to another string
 *
 * @src: string to copy
 * @dest: destination string
 *
 * Return: new copy of string
 */

char *_strcopy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: struct dog dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog.name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(name, dog->name);
	dog->age = age;
	dog->owner = _strcopy(owner, dog->owner);

	return (dog);
}
