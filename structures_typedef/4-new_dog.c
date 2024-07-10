#include "dog.h"

/**
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int *t;

	if (dog_t == 0)
		return (NULL);
	t = malloc(sizeof(dog_t));
	if (t == 0)
		return (NULL);

