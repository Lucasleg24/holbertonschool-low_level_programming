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

	while (v != 0)
	{
		count = 1;
		while (count * 2 <= v)
		{
			count = count * 2;
		}
		result = result + count;
		if (result <= n)
			_putchar('1');
		else
		{
			result = result - count;
			_putchar('0');
		}

		v = count;
	}
}
