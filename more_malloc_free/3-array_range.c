#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - array of integer
 * @min: value min
 * @max: value max
 * Return: 0 or NULL
 */

int *array_range(int min, int max)
{
	int *t;
	int i;

	if (min > max)
		return (NULL);
	t = malloc(sizeof(int) * (max + 1));
	if (t == 0)
		return (NULL);
	for (i = 0; i < (max + 1); i++)
	{
		t[i] = min;
		min++;
	}
	return (t);
}
