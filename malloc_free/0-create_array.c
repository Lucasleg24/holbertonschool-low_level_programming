#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array
 * @size: size of array
 * @c: first caracter
 * Return: return NULL or 0
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	t = malloc(sizeof(char) * size);

	if (t == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
