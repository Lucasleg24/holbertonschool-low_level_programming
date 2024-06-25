#include "main.h"

/**
 * rev_string - reverse and print a string
 * @s: varaible
 * Return: 0
 */

void rev_string(char *s)
{
	int l;
	int i;
	char t;
	int c = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	c = l - 1;
	for (i = 0; i <= c; i++, c--)
	{
		t = s[i];
		s[i] = s[c];
		s[c] = t;
	}
}
