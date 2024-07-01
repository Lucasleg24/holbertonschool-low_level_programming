#include "main.h"

/**
 * *_memset - replace by octet
 * @s: variable pointer
 * @n: variable 1
 * @b: variable byte
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
