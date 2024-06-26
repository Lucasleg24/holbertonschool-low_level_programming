#include "main.h"
#include "2-strlen.c"

/**
 * *_strcpy - copy all caracter
 * @src: variable array 1
 * @dest: varaible array 2
 * Return: return dest value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

