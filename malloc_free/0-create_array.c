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

	t = malloc(sizeof(char) * size);
	t[0] = c;

	if (size == 0)
		return ('\0');
	return (0);
}
