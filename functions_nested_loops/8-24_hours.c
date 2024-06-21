#include "main.h"

/**
 * jack_bauer - ^rints all minuts
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int h;
	int m1;
	int m2;

	for (h = 0; h < 24; h++)
	{

		for (m1 = '0'; m1 <= '5'; m1++)
		{

			for (m2 = '0'; m2 <= '9'; m2++)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
				_putchar(':');
				_putchar(m1);
				_putchar(m2);
				_putchar('\n');
			}
		}
	}
}

