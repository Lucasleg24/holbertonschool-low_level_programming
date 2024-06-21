#include "main.h"

/**
 * times_table - print all table
 */

void times_table(void)
{
	int a;
	int b;
	int product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}
			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			else
			{
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
