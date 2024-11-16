#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 *@name: char
 *@age: float
 *@owner: char
 *Description: Define a new type struct dog_t with the following elements
 *Return: 0 always
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

struct dog dog_t;
#endif
