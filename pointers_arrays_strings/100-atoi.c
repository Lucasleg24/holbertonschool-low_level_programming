#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _atoi - print caracter
 * @s: variable
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0;

	while (i < _strlen(s))
	{
		printf("%d", s[i]);
		putchar('\n');
		i++;
	}
	return (0);
}

