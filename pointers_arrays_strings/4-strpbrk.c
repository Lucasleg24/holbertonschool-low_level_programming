#include "main.h"

/**
 * *_strpbrk - all caracter in accept
 * @s: variable string
 * @accept: variable value
 * Return: null or s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int size = 0;

	while (accept[size])
		size++;

	while (*s)
	{
		for (i = 0; i < size; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;
	}
	return ('\0');
}
