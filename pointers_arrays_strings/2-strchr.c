#include "main.h"

/**
 * *_strchr - check all caracter
 * @s: variable string
 * @c: variable caracter
 * Return: value
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (c == '\0')
		{
			return (s);
		}
		return ('\0');
}
