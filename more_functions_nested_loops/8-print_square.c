#include "main.h"

/**
 *
 *
 */

void print_square(int size)
{
	int i;
	int e;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (e = 0; e < size; e++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
