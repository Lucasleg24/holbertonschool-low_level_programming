#include "main.h"

/**
 * *cap_string - print uppercase
 * @str: variable
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && (i - 1) == ' ')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
