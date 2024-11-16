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
	dog_t *d;
	int x, y, z;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	
	if (name != NULL)
	{
		for (x = 0; name[x] != '\0'; x++)

		d->name = malloc(sizeof(char) * x);
		if (d->name == NULL)
		{
			free(d);
			return(NULL);
		}
		for (z = 0; z < x; z++)
			d->name[z] = name[z];
	}
	else
		d->name = NULL;
	d->age = age;
	if (owner != NULL)
	{
		for (y = 0; owner[y] != '\0'; y++)

	d->owner = malloc(sizeof(char) * y);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (z = 0; z < y; z++)
		d->owner[z] = owner[z];
	}
	else
		d->owner = NULL;

	return (d);
}
