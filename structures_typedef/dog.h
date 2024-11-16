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

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
