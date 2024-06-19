#include <stdio.h>

/**
 * main - prints = all base 16
 *
 *Return: Always 0
 */

int main(void)
{
	char c;
	char h;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (h = 'a'; h <= 'f'; h++)
		putchar(h);

	putchar('\n');
	return (0);
}
