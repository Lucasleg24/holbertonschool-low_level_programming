#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}
	_putchar('\n');

}
