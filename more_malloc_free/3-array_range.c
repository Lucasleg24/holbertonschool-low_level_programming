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
	int result;

	if (min > max)
		return (NULL);
	result = max - min + 1;
	t = malloc(sizeof(int) * result);
	if (t == 0)
		return (NULL);
	for (i = 0; i < result; i++)
	{
		t[i] = min + i;
	}
	return (t);
}
