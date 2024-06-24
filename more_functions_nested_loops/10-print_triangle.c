#include "main.h"

/**
 *
 *
 */

void print_triangle(int size)
{
	int i;
	int e;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (e = size; e > 0; e--)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
