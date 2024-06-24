#include "main.h"

/**
 * print_numbers - print all numbers
 * Return: retunr variable
 */

void print_numbers(void)
{
	int v;

	for (v = '0'; v <= '9'; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
}
