#include "main.h"

/**
 * print_triangle - print triangle
 * @size: variable
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int e;
	int h;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (e = 1; e < (size - i); e++)
			{
				_putchar(' ');
			}
			for (h = 0; h <= (size - e); h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
