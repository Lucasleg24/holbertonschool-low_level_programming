#include <stdio.h>

/**
 * main - prints = all base 16
 *
 *Return: Always 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= 'F'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
