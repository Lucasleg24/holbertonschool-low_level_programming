#include "main.h"

/**
 * flip_bits - change value bit
 * @n: variable 1
 * @m: variable 2
 * Return: return number of bit change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int swap = 0;
	unsigned long int size;
	unsigned long int i;

	size = sizeof(n) * 8 - 1;

	for (i = 0; i <= size; i++)
	{
		if ((n & 1) != (m & 1))
			swap++;

		n = n >> 1;
		m = m >> 1;
	}

	return (swap);

}
