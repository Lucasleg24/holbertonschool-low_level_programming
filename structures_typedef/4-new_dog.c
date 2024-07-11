#include "dog.h"
#include <stdlib.h>
#include "1-strdup.c"

/**
 * *_strdup - copy string
 * @str: string duplicate
 * Return: 0 or NULL
 */

char *_strdup(char *str)
{
        char *t;
        int i = 0;
        int l;

        if (str == NULL)
        {
                return (NULL);
        }
        for (l = 0; str[l] != '\0'; l++)
        {
        }
        l++;

        t = malloc(sizeof(char) * l);

        if (t == 0)
        {
                return (NULL);
        }
        while (str[i] != '\0')
        {
                t[i] = str[i];
                i++;
        }
        return (t);
}

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