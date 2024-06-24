#include "main.h"

/**
 * print_diagonal - print all backslash
 * @n: variable
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int e;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (e = 0; e < i; e++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
