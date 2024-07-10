#include "dog.h"

/**
 * init_dog - initialize variable
 * @d: appel structure
 * @name: name of dog
 * @age: age of dog
 * @owner: proprio du dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
