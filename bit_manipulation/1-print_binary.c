#include "main.h"

/**
 * print_binary - print the number
 * @n: variable
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int count;
	unsigned long int result = 0;
	unsigned long int v = n;

	if (v == 0)
		_putchar('0');
	if (v == 1)
		_putchar('1');

	while (v > 1)
	{
		count = 1;
		while (count * 2 < v)
		{
			count = count * 2;
		}
		result = result + count;
		if (result <= n && result * 2 != n)
			_putchar('1');
		else if (result * 2 == n)
		{
			_putchar('1');
			result = result * 2;
			count = count * 2;
		}
		else
		{
			result = result - count;
			_putchar('0');
		}

		v = count;
	}
}
