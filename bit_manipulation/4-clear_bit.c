#include "main.h"

/**
 * clear_bit - change bit at 0
 * @n: variable
 * @index: position to change
 * Return: return 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int mask;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	mask = 1 << index;

	*n = *n & ~mask;

	return (1);
}
