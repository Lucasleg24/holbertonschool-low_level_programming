#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concaten two string
 * @s1: string 1
 * @s2: string 2
 * @n: varaible bytes
 * Return: 0 or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	int i = 0;
	unsigned int l1;
	unsigned int l2;
	unsigned int cal;
	int sum = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}
	for (cal = 0; s2[cal] != '\0'; cal++)
	{
	}
	l2 = n >= cal ? cal : n;
	sum = l1 + l2 + 1;
	t = malloc(sizeof(char) * sum);
	if (t == 0)
	{
		return (NULL);
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		t[i] = s1[l1];
		i++;
	}
	for (cal = 0; cal < l2; cal++)
	{
		t[i] = s2[cal];
		i++;
	}
	t[i] = '\0';
	return (t);
}
