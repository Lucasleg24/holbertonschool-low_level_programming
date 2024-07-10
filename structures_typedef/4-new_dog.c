#include "dog.h"
#include <stdlib.h>
#include "1-strdup.c"

/**
 * *new_dog - copy the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: 0 or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == 0)
		return (NULL);
	_strdup(dog_t);
	return (new_dog);
}
