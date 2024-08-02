#include "main.h"

/**
 * print_binary - print the number
 * @n: variable
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(unsigned long int) * 8 - 1;
	int started = 0;

	while (bit >= 0)
	{

		if ((n & (1UL << bit)) != 0)
		{
			putchar('1');
			started = 1;
		}
		else if (started)
		{
			putchar('0');
		}
		bit--;
	}
	if (!started)
	{
		putchar('0');
	}
}
