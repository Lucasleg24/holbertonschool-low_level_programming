#include "main.h"

/**
 * print_rev - print reverse
 * @s: variable
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
	_putchar(s[i]);
	i--;
	}

	_putchar('\n');
}
