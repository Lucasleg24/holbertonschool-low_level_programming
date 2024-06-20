#include "main.h"

/**
 * print_alphabet_x10 - print alphabet lowercase x10
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char A;
	int beta;

	for (beta = 0; beta <= 9; beta++)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
	}

}
