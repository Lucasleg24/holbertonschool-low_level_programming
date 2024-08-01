#include "main.h"

/**
 * set_bit - add a bit
 * @n: variable
 * @index: position for add bit
 * Return: return value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned long int mask;

	i = sizeof(*n) * 8 - 1;

	if (index > i)
		return (-1);

	mask = 1 << index;

	*n = mask | *n;

	return (1);

}
