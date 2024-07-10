#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copy string
 * @str: string duplicate
 * Return: 0 or NULL
 */

char *_strdup(char *str)
{
	char *t;
	int i = 0;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; str[l] != '\0'; l++)
	{
	}
	l++;

	t = malloc(sizeof(char) * l);

	if (t == 0)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		t[i] = str[i];
		i++;
	}
	return (t);
}
