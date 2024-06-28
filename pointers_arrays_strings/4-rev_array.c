#include "main.h"

/**
 * reverse_array - rev caracter
 * @a: variable 1
 * @n: varaible 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int t;
	int c = n - 1;

	while (i < c)
	{
		t = a[i];
		a[i] = a[c];
		a[c] = t;
		i++;
		c--;
	}
}
