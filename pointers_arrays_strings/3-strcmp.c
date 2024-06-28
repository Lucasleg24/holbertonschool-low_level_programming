#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: variable 1
 * @s2: variable 2
 * Return: return 0
 */

int _strcmp(char *s1, char *s2)
{

	for (; (*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2); s1++, s2++)
			{
			}
			if (*s1 != *s2)
			{
				return (*s1 - *s2);
				}
			else
			{
				return (0);
			}
}
