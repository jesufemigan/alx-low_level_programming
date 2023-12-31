#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
