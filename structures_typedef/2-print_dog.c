#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 * Return: 0 always
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	{
		if (d->name == NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age < 0)
			printf("Age: (nil)\n");
		else

			printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)

			printf("Owner: (nil)\n");
		else

			printf("Owner: %s\n", d->owner);

	}
}
