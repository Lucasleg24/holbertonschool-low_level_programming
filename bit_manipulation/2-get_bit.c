#include "main.h"

/**
 * get_bit - function return bit value
 * @n: variable number
 * @index: value of placement in n
 * Return: return value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bi;

	bi = sizeof(n) * 8 - 1;

	if (index > bi)
		return (-1);


	return (n >> index & 1);
}
