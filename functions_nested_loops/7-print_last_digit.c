#include "main.h"

/**
 * print_last_digit - print result modulo
 * @r: variable
 * Return: always 0
 */

int print_last_digit(int r)
{
	int last_digit = r % 10;

		if (last_digit < 0)
			last_digit *= -1;

		_putchar(last_digit + '0');

		return (last_digit);
}
