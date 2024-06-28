#include "main.h"

/**
 * *_strncpy - copy caracter
 * @dest: variable 1
 * @src: variable 2
 * @n: variable 3
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	char *s = src;
	int i;

	for (i = 0; i < n && *s != '\0'; i++)
	{
		*p = *s;
		p++;
		s++;
	}
	*p = '\0';

	return (dest);
}
