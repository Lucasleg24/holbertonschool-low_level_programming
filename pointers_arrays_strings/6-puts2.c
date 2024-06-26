#include "main.h"

/**
 * puts2 - puts 1 in 2
 * @str: variable
 * Return: always 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
