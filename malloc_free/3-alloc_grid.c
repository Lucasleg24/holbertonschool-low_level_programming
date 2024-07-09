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
	int *t[height][width];
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < height; i++)
	{
	}
	for (j = 0; j < width; j++)
	{
	}
	sum = sum + i * j;

	t = malloc(sizeof(int) * sum);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			t = [i][j];
		}
	}

	return (t);
}
