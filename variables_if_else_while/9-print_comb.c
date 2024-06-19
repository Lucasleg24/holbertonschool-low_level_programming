#include <stdio.h>

/**
 * main - prints = all list numbers
 *
 *Return: always 0
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
{
		putchar(c);
		putchar(',');
		putchar(' ');
}

		putchar('\n');
		return (0);
}
