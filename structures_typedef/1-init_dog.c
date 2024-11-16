#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 *@d: struct dog
 *@name: char
 *@age: float
 *@owner: char
 *Return: 0 always
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
