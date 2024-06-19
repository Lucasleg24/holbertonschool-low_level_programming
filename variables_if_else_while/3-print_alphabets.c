#include <stdio.h>

/**
 * main - prints ch and cj
 *
 * return: always 0
 */

int main(void)
{
	char ch;
	char cj;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (cj = 'A'; cj <= 'Z'; cj++)
		putchar(cj);
	putchar('\n');
	return (0);
}
