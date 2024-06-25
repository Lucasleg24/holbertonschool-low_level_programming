#include "main.h"

/**
 * swap_int - swap 2 value
 * @a: value a
 * @b: value b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
