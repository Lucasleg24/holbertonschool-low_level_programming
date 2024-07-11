#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - liberer, delivrer
 * @d: pointer
 * Return: 0 or NULL
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
