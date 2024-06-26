#include "main.h"
#include <stdio.h>

/**
 * print_array - print all caracter
 * @a: variable array
 * @n: variable print array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		if (c == n - 1)
		{
			printf("%d", a[c]);
		c++;
		}
		else
			printf("%d, ", a[c]);
		c++;
	}
	putchar('\n');
}
