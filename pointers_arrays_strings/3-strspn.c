#include "main.h"

/**
 * _strspn - count bytes
 * @s: string
 * @accept: count bytes
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int size = 0;
	unsigned int result = 0;

	while (accept[size])
		size++;

	while (*s)
	{
		for (i = 0; i < size; i++)
		{
			if (*s == accept[i])
			{
				result++;
				break;
			}
		}

		s++;

		if (i == size)
			break;
	}

	return (result);
}
