#include "main.h"

/**
 * _strlen - string
 * @s: variable
 * Return: return c
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	return (c);
}
