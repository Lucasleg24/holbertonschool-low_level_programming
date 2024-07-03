#include "main.h"

/**
 * _puts_recursion - recursive print string
 * @s: char print all caracter
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '\0')
		{
			break;
		}
		_putchar(s[i]);
		i = i + 1;
	}
	_putchar('\n');
}
