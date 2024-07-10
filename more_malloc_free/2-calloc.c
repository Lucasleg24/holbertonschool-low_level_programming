#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocation memory initialised 0
 * @nmemb: number varaible
 * @size: size varaible
 * Return: 0 or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;
	unsigned int i;
	unsigned char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t = malloc(size * nmemb);
	if (t == 0)
	{
		return (NULL);
	}
	c = (unsigned char *)t;
	for (i = 0; i < nmemb; i++)
	{
		c[i] = 0;
	}
	return (t);
}
