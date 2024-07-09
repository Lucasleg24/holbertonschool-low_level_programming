#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - malloc functions
 * @width: variable array 1
 * @height: variable array 2
 * Return: 0 or NULL
 */

int **alloc_grid(int width, int height)
{
	int *t;
	int i;
	int j;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);

	t = malloc(sizeof(int*) * height);
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);
}
