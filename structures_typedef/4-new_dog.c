#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int x, y;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	x = strlen(name);
	d->name = malloc(sizeof(char) * (x +1));
	if (d->name == NULL)
	{
		free(d);
		return(NULL);
	}
	y = strlen(owner);
	d->owner = malloc(sizeof(char) * (y + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
