#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int x, y, z;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		;
	x++;
	d->name = malloc(x * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (z = 0; z < x; z++)
		d->name[z] = name[z];
	d->age = age;
	for (y = 0; owner[y]; y++)
		;
	y++;
	d->owner = malloc(y * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (z = 0; z < y; z++)
		d->owner[z] = owner[z];
	return (d);
}
