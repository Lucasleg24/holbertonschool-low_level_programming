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

	t = malloc(sizeof(char) * size);
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	if (size == 0)
	{
		return ('\0');
	}
	return (t);
}
