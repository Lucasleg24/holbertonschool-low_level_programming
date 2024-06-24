#include "main.h"

/**
 * more_numbers - prints numbers x10
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int n;
	int v;

	for (n = 0; n <= 9; n++)
	{
		for (v = 0; v <= 14; v++)
		{
			if (v > 9)
			{	
				_putchar((v / 10) + '0');
				_putchar((v % 10) + '0');
			}

			else
				_putchar((v) + '0');
		}
		_putchar('\n');
	}
}
