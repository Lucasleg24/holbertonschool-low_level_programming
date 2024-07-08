#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function concat two string
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	int i = 0;
	int l1;
	int l2;
	int sum = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
	}
	sum = sum + l1 + l2 + '1';

	t = malloc(sizeof(char) * sum);

	if (t == 0)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		t[i] = s2[i];
		i++;
	}
	return (t);
}
