#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - puts 1 in 2
 * @str: variable
 * Return: always 0
 */

void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
