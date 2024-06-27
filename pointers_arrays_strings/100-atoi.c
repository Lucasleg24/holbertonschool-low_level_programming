#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _atoi - print caracter
 * @s: variable
 * Return: i * c
 */

int _atoi(char *s)
{
	unsigned int i = 0;
	int c = 1;

	do 
	{
	if (*s == '-')
		c *= -1;
	else if (*s >= '0' && *s <= '9')
		i = (i * 10) + (*s - '0');
	else if (i > 0)
		break;
	}
	while (*s++);
		
	
	return (i * c);
}

