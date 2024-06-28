#include "main.h"

/**
 * *_strcat - copy string
 * @src: variable
 * @dest: variable 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';

	return (dest);
}
