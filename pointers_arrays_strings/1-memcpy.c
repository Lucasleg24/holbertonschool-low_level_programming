#include "main.h"

/**
 * *_memcpy - change value
 * @dest: array 2
 * @src: array 1
 * @n: variable 1
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
