#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of string
 * @str: variable
 * Return: always 0
 */

void puts_half(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		if (str[i] >= '5')
		{
			_putchar(str[i]);
			i++;
		}
		else
			i++;
	}
	_putchar('\n');
}
