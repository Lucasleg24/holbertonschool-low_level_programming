#include "main.h"
#include "2-strlen.c"

/**
 * *_strcat - copy string
 * @char: variable
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
